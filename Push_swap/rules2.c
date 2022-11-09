/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:45:19 by eaydin            #+#    #+#             */
/*   Updated: 2022/09/05 01:28:03 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_rrb(t_all *all)
{
	int	b;

	b = all->b[all->b_size -1];
	ft_memmove(all->b + 1, all->b, all->b_size * 4);
	all->b[0] = b;
	write(1, "rrb\n", 4);
}

void	ft_pb(t_all *all)
{
	int	tmp;

	if (all->a_size > 0)
	{
		tmp = all->a[0];
		ft_memmove(all->a, all->a + 1, all->a_size * 4);
		ft_memmove(all->b + 1, all->b, all->b_size * 4);
		all->b[0] = tmp;
		all->a_size--;
		all->b_size++;
		write(1, "pb\n", 3);
	}
}

void	ft_pa(t_all *all)
{
	int	tmp;

	if (all->b_size > 0)
	{
		tmp = all->b[0];
		ft_memmove(all->b, all->b + 1, all->b_size * 4);
		ft_memmove(all->a + 1, all->a, all->a_size * 4);
		all->a[0] = tmp;
		all->b_size--;
		all->a_size++;
		write(1, "pa\n", 3);
	}
}

void	minmax(long int value, int neg_value)
{
	if ((value * neg_value) < -2147483648)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if ((value * neg_value) > 2147483647)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
}

void	second_sorted(t_all *all)
{
	if (all->a[1] == 2)
		ft_swap_a(all);
}
