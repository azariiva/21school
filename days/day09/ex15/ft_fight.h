/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 07:42:50 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 08:12:01 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H
# include "ft_perso.h"
# include <unistd.h>

typedef enum	e_attack
{
	KICK,
	PUNCH,
	HEADBUTT
}				t_attack;

void	ft_fight(t_perso *a, t_perso *b, t_attack attack);
#endif
