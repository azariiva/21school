/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:29:05 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 22:58:54 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** This library handle all interactions with streams.
*/

#ifndef FT_FT_H

# define FT_FT_H

# include <unistd.h>

/*
 ** All standart streams defined below.
*/
# define STDIN 0
# define STDOUT 1
# define STDERR 2

typedef unsigned int	t_uint;

void					ft_putchar(int stream, char c);
void					ft_putstr(int stream, const char *c);
char					ft_getchar(int stream);
void					ft_help_putnbr(int stream, int nb);
void					ft_putnbr(int stream, int nb);

#endif
