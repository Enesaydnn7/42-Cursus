/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:36:05 by eaydin            #+#    #+#             */
/*   Updated: 2022/09/07 19:15:49 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	number_countt(int argc, char **argv)
{
	int	i;
	int	number_count;

	i = 1;
	number_count = 0;
	while (i < argc)
	{
		number_count += w_c(argv[i], ' ');
		i++;
	}
	return (number_count);
}

int	check_argv(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (!((*str >= '0' && *str <= '9') || \
			((*str == '-' || *str == '+') && (str[1] >= '0' && str[1] <= '9'))))
			return (1);
		if (*str == '+' && str[1] == '+')
			return (1);
		if ((*str == '-' || *str == '+') && str[1] == '0')
			return (1);
		str++;
	}
	return (0);
}

void	arg_al(t_all *x, int argc, char **argv)
{
	char	**str;
	int		i;
	int		j;
	int		number_count;

	number_count = number_countt(argc, argv);
	x->a = (int *)malloc(number_count * sizeof(int *));
	x->b = (int *)malloc(number_count * sizeof(int *));
	i = 1;
	x->a_size = 0;
	x->b_size = 0;
	while (i < argc)
	{
		str = ft_split(argv[i++], ' ');
		j = 0;
		while (str[j])
		{
			if (check_argv(str[j]) == 1)
				ft_error();
			x->a[x->a_size++] = ft_atoi(str[j++]);
		}
		ft_free(str);
	}
}

int	is_sorted(t_all *x)
{
	int	i;
	int	size;

	size = x->a_size;
	i = 0;
	while (i < size - 1)
	{
		if (x->a[i] < x->a[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_all	all;
	int		i;

	if (argc == 1)
		return (0);
	i = 1;
	while (i < argc)
		if (!ft_strlen(argv[i++]))
			ft_error();
	arg_al(&all, argc, argv);
	if (is_sorted(&all) == 1 || same_number(&all) == 1)
		return (0);
	index_a(&all);
	sort_select(&all);
	if (all.a[0] > all.a[1])
		ft_swap_a(&all);
	free(all.a);
	free(all.b);
}
