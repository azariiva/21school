/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:40:04 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 23:13:56 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H

# define FT_RUSH_H

# include "ft_row.h"
# include <stdlib.h>

/*
 ** Exit codes for ft_get_rush.
*/
# define NOTRUSH -1
# define RUSH 0

/*
 ** This structure store rush rows.
*/
typedef struct	s_rush
{
	t_row		*first;
	t_row		*middle;
	t_row		*last;
	t_uint		size;
}				t_rush;

t_rush			*ft_make_rush(void);
int				ft_get_rush(int stream, t_rush *rush);
void			ft_free_rush(t_rush *rush);
int				ft_is_rush00(t_rush *rush);
int				ft_is_rush01(t_rush *rush);
int				ft_is_rush02(t_rush *rush);
int				ft_is_rush03(t_rush *rush);
int				ft_is_rush04(t_rush *rush);
int				*ft_which_rush(t_rush *rush);
int				ft_formatted_output(int stream, int *rush_x, t_rush *rush);

#endif
