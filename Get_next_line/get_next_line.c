/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:12:20 by eaydin            #+#    #+#             */
/*   Updated: 2022/08/09 18:20:33 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*reading_from_file(int fd, char *buff)
{
	char	*tmp;
	int		byte_num;

	byte_num = 1;
	tmp = malloc(BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	while (check_newline(buff) && byte_num)
	{
		byte_num = read(fd, tmp, BUFFER_SIZE);
		if (byte_num == -1)
		{
			free(tmp);
			return (NULL);
		}
		tmp[byte_num] = '\0';
		buff = append_string(buff, tmp);
	}
	free(tmp);
	return (buff);
}

char	*get_next_line(int fd)
{
	static char	*buff;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd == -1)
		return (NULL);
	buff = reading_from_file(fd, buff);
	if (!buff)
		return (NULL);
	line = get_line(buff);
	buff = shift_string(buff);
	return (line);
}
