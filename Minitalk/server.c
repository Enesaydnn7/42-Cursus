/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:27:59 by eaydin            #+#    #+#             */
/*   Updated: 2022/08/23 21:11:52 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	f(int sig)
{
	static char	x = 0;
	static int	n = 0;

	if (sig == SIGUSR1)
	{
		x = x | 1;
	}
	n++;
	if (n == 8)
	{
		write (1, &x, 1);
		n = 0;
		x = 0;
	}
	else
		x <<= 1;
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	signal(SIGUSR1, f);
	signal(SIGUSR2, f);
	while (1)
		pause();
	return (0);
}
