/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 16:02:52 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/10 20:30:35 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# include <stdlib.h>
# include <unistd.h>

# define IS_NUM(c) ('0' <= c && c <= '9')

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *str1, char *str2);
int		ft_strlen(char **str);
void	ft_swap(int *a, int *b);

#endif
