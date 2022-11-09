/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:07:50 by eaydin            #+#    #+#             */
/*   Updated: 2022/01/24 03:09:49 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ss;
	size_t		count;

	count = 0;
	ss = (const char *)s;
	while (count < n)
	{
		if (ss[count] == (const char)c)
			return ((void *)&ss[count]);
		count++;
	}
	return (NULL);
}
