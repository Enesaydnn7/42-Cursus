/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:11:46 by eaydin            #+#    #+#             */
/*   Updated: 2022/08/07 21:33:32 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	check_newline(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (*str == '\n')
			return (0);
		str++;
	}
	return (1);
}

char	*append_string(char *s1, char *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s2)
		return (NULL);
	if (!s1)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	i = -1;
	while (s1[++i])
		result[i] = s1[i];
	j = 0;
	while (s2[j])
		result[i++] = s2[j++];
	result[i] = '\0';
	free(s1);
	return (result);
}

char	*get_line(char *buff)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	if (!buff[i])
		return (NULL);
	while (buff[i] && buff[i] != '\n')
		i++;
	if (buff[i])
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	j = 0;
	while (j < i)
	{
		line[j] = buff[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char	*shift_string(char *str)
{
	char	*shifted_str;
	int		i;
	int		j;

	i = 0;
	while (str[i] && str[i] != '\n')
		++i;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	++i;
	shifted_str = malloc(ft_strlen(str) - i + 1);
	if (!shifted_str)
		return (NULL);
	j = 0;
	while (j < ft_strlen(str) - i)
	{
		shifted_str[j] = str[j + i];
		j++;
	}
	shifted_str[j] = '\0';
	free(str);
	return (shifted_str);
}
