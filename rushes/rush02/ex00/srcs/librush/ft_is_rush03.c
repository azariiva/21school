/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_rush03.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:34:46 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 18:26:39 by ggeri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_is_rush03(t_rush *rush)
{
	if (rush->size == 0)
		return (1);
	if ((rush->first->first != 'A') || (rush->first->middle && \
			rush->first->middle != 'B') || (rush->first->last && \
				rush->first->last != 'C'))
		return (0);
	if ((rush->middle->first && rush->middle->first != 'B') || \
			(rush->middle->middle && rush->middle->middle != ' ') || \
			(rush->middle->last && rush->middle->last != 'B'))
		return (0);
	if ((rush->last->first && rush->last->first != 'A') || (rush->last->middle \
				&& rush->last->middle != 'B') || (rush->last->last && \
					rush->last->last != 'C'))
		return (0);
	return (1);
}
