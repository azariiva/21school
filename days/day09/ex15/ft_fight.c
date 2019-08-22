/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 07:44:28 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 08:19:28 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_a_attack_b(char *a_name, char *b_name, char *attack_name)
{
	ft_putstr(a_name);
	ft_putstr(" does a judo ");
	ft_putstr(attack_name);
	ft_putstr(" on ");
	ft_putstr(b_name);
	ft_putstr(".\n");
}

void	ft_fight(t_perso *a, t_perso *b, t_attack attack)
{
	if (a->life == 0.0 || b->life == 0.0)
		return ;
	if (attack == KICK)
	{
		b->life -= 15.0;
		ft_a_attack_b(a->name, b->name, "kick");
	}
	else if (attack == PUNCH)
	{
		b->life -= 5.0;
		ft_a_attack_b(a->name, b->name, "punch");
	}
	else if (attack == HEADBUTT)
	{
		b->life -= 20.0;
		ft_a_attack_b(a->name, b->name, "headbutt");
	}
	if (b->life <= 0.0)
	{
		ft_putstr(b->name);
		ft_putstr(" is dead.\n");
		b->life = 0.0;
	}
}
