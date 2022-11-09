/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:12:42 by eaydin            #+#    #+#             */
/*   Updated: 2022/08/07 21:34:18 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 90
# endif

char	*get_next_line(int fd);
char	*reading_from_file(int fd, char *buff);
char	*get_line(char *buff);
char	*append_string(char *s1, char *s2);
char	*shift_string(char *str);
int		check_newline(char *str);
int		ft_strlen(char *str);

#endif
