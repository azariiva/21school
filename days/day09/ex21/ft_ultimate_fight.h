/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 07:42:50 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 13:25:23 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ULTIMATE_FIGHT_H
# define FT_ULTIMATE_FIGHT_H
# include "ft_perso.h"
# include <unistd.h>

typedef enum	e_attack
{
	KICK,
	PUNCH,
	HEADBUTT,
	KICK1,
	KICK2,
	KICK3,
	KICK4,
	KICK5,
	KICK6,
	KICK7,
	KICK8,
	KICK9,
	KICK10,
	KICK11,
	KICK12
}				t_attack;

void	ft_fight(t_perso *a, t_perso *b, t_attack attack);
#endif
