/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:47:20 by eaydin            #+#    #+#             */
/*   Updated: 2022/09/07 13:59:35 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_select(t_all *all)
{
	if (all->a_size == 3)
		three_sorted(all);
	else if (all->a_size == 2)
		second_sorted(all);
	else if (all->a_size == 5)
		five_sorted(all);
	else
		radix_sort(all);
}

int	find_min(t_all *all)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = all->a[0];
	while (i < all->a_size)
	{
		if (tmp > all->a[i] && i < all->a_size)
		{
			tmp = all->a[i];
			j = i;
		}
		i++;
	}
	all->a[j] = 2147483647;
	return (j);
}

void	index_a(t_all *all)
{
	int	i;
	int	*new_a;

	i = 0;
	new_a = (int *)malloc(sizeof(int) * all->a_size);
	while (i < all->a_size)
	{
		new_a[find_min(all)] = i + 1;
		i++;
	}
	free(all->a);
	all->a = new_a;
}

int	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
	return (0);
}

int	same_number(t_all *x)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = x->a_size;
	while (i < size)
	{
		j = 1 + i;
		while (j < size)
		{
			if (x->a[i] == x->a[j])
				ft_error();
			else
				j++;
		}
		i++;
	}
	return (0);
}
