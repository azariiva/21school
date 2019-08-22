/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vlib.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 14:29:25 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/11 19:54:57 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VLIB_H

# define VLIB_H

# include "ftlib.h"
# include <stdlib.h>

typedef struct	s_var
{
	char	*p_cell;
	int		size;
	int		iter;
	char	*body;
}				t_var;

t_var			*ft_make_varr(char **argv);

#endif
