/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_rush00.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:06:40 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 23:18:45 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

/*
 ** This function and all other rushXX are the same with small difference.
 ** This function detects is rush00 given.
*/

int	ft_is_rush00(t_rush *rush)
{
	if (rush->size == 0)
		return (1);
	if ((rush->first->first != 'o') || (rush->first->middle && \
			rush->first->middle != '-') || (rush->first->last && \
				rush->first->last != 'o'))
		return (0);
	if ((rush->middle->first && rush->middle->first != '|') || \
			(rush->middle->middle && rush->middle->middle != ' ') || \
			(rush->middle->last && rush->middle->last != '|'))
		return (0);
	if ((rush->last->first && rush->last->first != 'o') || (rush->last->middle \
				&& rush->last->middle != '-') || (rush->last->last && \
					rush->last->last != 'o'))
		return (0);
	return (1);
}
