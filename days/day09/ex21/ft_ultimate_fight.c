/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 07:44:28 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 13:42:37 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_fight.h"

void		ft_putstr(const char *str)
{
	while (*str)
		write(1, str++, 1);
}

void		ft_a_attack_b(char *a_name, char *b_name, const char *attack_name)
{
	ft_putstr(a_name);
	ft_putstr(" does a judo ");
	ft_putstr(attack_name);
	ft_putstr(" on ");
	ft_putstr(b_name);
	ft_putstr(".\n");
}

const char	*get_attack_name(t_attack attack)
{
	const char *attack_names[] = {"kick", "punch", \
		"headbutt", "chop ichi", "chop ni", "chop san", \
			"chop shi", "chop go", "chop roku", \
			"chop shichi", "chop hachi", \
			"chop ku", "chop ju", "chop hyaku", \
			"chop sen"};

	return (attack_names[attack]);
}

const float	get_attack_point(t_attack attack)
{
	const float attack_points[] = {15.0, 5.0, 20.0, \
		13.0, 3.0, 18.0, 9.0, 11.0, 13.0, 8.0, 6.0, \
			11.0, 9.0, 18.0, 10.0};

	return (attack_points[attack]);
}

void		ft_fight(t_perso *a, t_perso *b, t_attack attack)
{
	if (a->life == 0.0 || b->life == 0.0)
		return ;
	b->life -= get_attack_point(attack);
	ft_a_attack_b(a->name, b->name, get_attack_name(attack));
	if (b->life <= 0.0)
	{
		ft_putstr(b->name);
		ft_putstr(" is dead.\n");
		b->life = 0.0;
	}
}
