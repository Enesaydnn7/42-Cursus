/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:06:38 by eaydin            #+#    #+#             */
/*   Updated: 2022/08/01 00:01:47 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(unsigned long int n)
{
	int	print_number;

	print_number = 0;
	if (n >= 16)
		print_number += ft_printpointer(n / 16);
	print_number += ft_printchar("0123456789abcdef"[n % 16]);
	return (print_number);
}
