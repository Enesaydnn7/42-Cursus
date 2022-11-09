/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:27:38 by eaydin            #+#    #+#             */
/*   Updated: 2022/08/23 22:19:16 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	i;
	long	nbr;
	int		isneg;

	i = 0;
	nbr = 0;
	isneg = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
	isneg = 1;
	i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (isneg == 1)
		return (-nbr);
	return (nbr);
}

void	signall(int pid, char *str)
{
	int	i;
	int	b;

	while (*str)
	{
		i = 0;
		b = 8;
		while (b--)
		{
			if (str[i] >> b & 1)
				kill (pid, SIGUSR1);
			else
				kill (pid, SIGUSR2);
			usleep (50);
		}
		str++;
		i++;
	}
}

int	main(int ac, char **av)
{
	int	pd;

	if (ac != 3)
	{
		write (1, "3 argüman giriniz.\n", 20);
		return (0);
	}
	pd = ft_atoi(av[1]);
	signall (pd, av[2]);
}
