/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_rush01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:33:23 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 19:23:43 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_is_rush01(t_rush *rush)
{
	if (rush->size == 0)
		return (1);
	if ((rush->first->first != '/') || (rush->first->middle && \
			rush->first->middle != '*') || (rush->first->last && \
				rush->first->last != '\\'))
		return (0);
	if ((rush->middle->first && rush->middle->first != '*') || \
			(rush->middle->middle && rush->middle->middle != ' ') || \
			(rush->middle->last && rush->middle->last != '*'))
		return (0);
	if ((rush->last->first && rush->last->first != '\\') || (rush->last->middle\
				&& rush->last->middle != '*') || (rush->last->last && \
					rush->last->last != '/'))
		return (0);
	return (1);
}
