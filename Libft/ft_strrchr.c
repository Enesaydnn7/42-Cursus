/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:19:41 by eaydin            #+#    #+#             */
/*   Updated: 2022/01/24 03:17:00 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ss;

	i = 0;
	ss = 0;
	while (s[i])
	{
		if (s[i] == (const char)c)
			ss = (char *)(s + i);
		i++;
	}
	if (s[i] == (const char)c)
		ss = (char *)(s + i);
	return (ss);
}
