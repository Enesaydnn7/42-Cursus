/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:05:52 by eaydin            #+#    #+#             */
/*   Updated: 2022/08/01 00:00:31 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printchar(char c);
int	ft_printstr(const char *str);
int	ft_printpercent(void);
int	ft_printpointer(unsigned long int n);
int	ft_printnbr(int n);
int	ft_printunbr(unsigned int n);
int	ft_printx(unsigned int n, char c);

int	ft_printf(const char *str, ...);
int	format(char c, va_list arg);

#endif
