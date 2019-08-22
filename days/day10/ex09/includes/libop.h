/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libop.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 20:25:02 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/13 19:07:10 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBOP_H

# define LIBOP_H

# include "libft.h"

typedef struct	s_opp
{
	char		*code;
	void		(*f)(int, int);
}				t_opp;

void			ft_sub(int a, int b);
void			ft_add(int a, int b);
void			ft_div(int a, int b);
void			ft_mul(int a, int b);
void			ft_mod(int a, int b);
void			ft_usage(int a, int b);

#endif
