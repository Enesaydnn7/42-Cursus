/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:43:28 by eaydin            #+#    #+#             */
/*   Updated: 2022/09/04 22:43:33 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_swap_a(t_all *all)
{
	int	tmp;

	if (all->a_size > 1)
	{
		tmp = all->a[0];
		all->a[0] = all->a[1];
		all->a[1] = tmp;
		write(1, "sa\n", 3);
	}
}

void	ft_swap_b(t_all *all)
{
	int	tmp;

	if (all->b_size > 1)
	{
		tmp = all->b[0];
		all->b[0] = all->b[1];
		all->b[1] = tmp;
		write(1, "sb\n", 3);
	}
}

void	ft_ra(t_all *all)
{
	int	b;

	b = all->a[0];
	ft_memmove(all->a, all->a + 1, all->a_size * 4);
	all->a[all->a_size -1] = b;
	write(1, "ra\n", 3);
}

void	ft_rb(t_all *all)
{
	int	b;

	b = all->b[0];
	ft_memmove(all->b, all->b + 1, all->b_size * 4);
	all->b[all->b_size -1] = b;
	write(1, "rb\n", 3);
}

void	ft_rra(t_all *all)
{
	int	b;

	b = all->a[all->a_size -1];
	ft_memmove(all->a + 1, all->a, all->a_size * 4);
	all->a[0] = b;
	write(1, "rra\n", 4);
}
