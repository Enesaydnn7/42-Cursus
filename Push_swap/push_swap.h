/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaydin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:37:56 by eaydin            #+#    #+#             */
/*   Updated: 2022/09/07 19:13:42 by eaydin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_all
{
	int	*a;
	int	a_size;

	int	*b;
	int	b_size;
}t_all;

void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_atoi(const char *str);
size_t	w_l(char const *s, char c);
size_t	w_c(char const *s, char c);
char	**ft_split(char const *s, char c);

void	ft_swap_a(t_all *all);
void	ft_swap_b(t_all *all);
void	ft_ra(t_all *all);
void	ft_rb(t_all *all);
void	ft_rra(t_all *all);
void	ft_rrb(t_all *all);
void	ft_pb(t_all *all);
void	ft_pa(t_all *all);
void	three_sorted(t_all *all);
void	five_sorted(t_all *all);
void	radix_sort(t_all *all);
void	sort_select(t_all *all);
int		find_min(t_all *all);
void	index_a(t_all *all);
int		ft_error(void);
int		same_number(t_all *x);
void	minmax(long int value, int neg_value);
void	second_sorted(t_all *all);
void	ft_free(char **str);
int		ft_strlen(char *str);
#endif
