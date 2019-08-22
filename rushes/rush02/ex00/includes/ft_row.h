/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_row.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:12:16 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 23:11:24 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ROW_H

# define FT_ROW_H

# include "ft_ft.h"
# include <stdlib.h>

/*
 ** Error codes for ft_get_row defined below.
*/
# define NEQROWS -3
# define BRKNROW -2
# define EMPTYROW -1
# define OK 0
# define ENDOFIN 1

/*
 ** This structure store elements of the row.
*/
typedef struct	s_row
{
	char		first;
	char		middle;
	char		last;
	t_uint		size;
}				t_row;

t_row			*ft_make_row(void);
int				ft_get_row(int stream, t_row *row);
int				ft_equal_row(t_row *a, t_row *b);
void			ft_cp_row(t_row *src, t_row *dest);

#endif
