/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 03:25:21 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 03:33:06 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

# define SAVE_THE_WORLD "SAVE_THE_WORLD"

typedef struct	s_perso
{
	char		*name;
	float		life;
	int			age;
	char		*profession;
}				t_perso;
#endif
