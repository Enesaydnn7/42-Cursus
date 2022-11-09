/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:39:15 by eaydin            #+#    #+#             */
/*   Updated: 2022/09/04 12:48:56 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	three_sorted(t_all *all)
{
	if (all->a[0] == 3)
		ft_ra(all);
	if (all->a[1] == 3)
		ft_rra(all);
	if (all->a[0] == 2)
		ft_swap_a(all);
}

int	ft_find(t_all *all)
{
	int	i;

	i = 0;
	while (all->a_size > i)
	{
		if (all->a[i] == 1 || all->a[i] == 2)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

void	five_sorted(t_all *all)
{
	while (ft_find(all) != -1)
	{
		if (ft_find(all) == 0)
		{
			ft_pb(all);
		}
		else
			ft_ra(all);
	}
	if (all->a[0] == 5)
		ft_ra(all);
	if (all->a[1] == 5)
		ft_rra(all);
	if (all->a[0] == 4)
		ft_swap_a(all);
	ft_pa(all);
	ft_pa(all);
	if (all->a[0] == 2)
		ft_swap_a(all);
}

void	change_to_bit(t_all *all, int j)
{
	if (((all->a[0] >> j) & 1) == 0)
		ft_pb(all);
	else
		ft_ra(all);
}

void	radix_sort(t_all *all)
{
	int	j;
	int	i;
	int	bit_size;
	int	size;

	i = 0;
	j = 0;
	bit_size = 8;
	if (all->a_size == 100)
	{
		bit_size = 6;
	}
	while (j <= bit_size)
	{
		i = 0;
		size = all->a_size;
		while (i < size)
		{
			change_to_bit(all, j);
			i++;
		}
		while (all->b_size != 0)
			ft_pa(all);
		j++;
	}
}
