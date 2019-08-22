/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:13:37 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 23:17:37 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

/*
 ** This funtions make rush from rows which were read using ft_get_row.
*/

int	ft_get_rush(int stream, t_rush *rush)
{
	int		errcode;
	t_row	*row;

	row = ft_make_row();
	if ((errcode = ft_get_row(stream, row)) == OK)
	{
		ft_cp_row(row, rush->first);
		rush->size++;
		while ((errcode = ft_get_row(stream, row)) == OK)
		{
			if ((rush->middle->first && !ft_equal_row(rush->middle, \
							rush->last)) || (row->size != rush->first->size))
			{
				free(row);
				return (NOTRUSH);
			}
			ft_cp_row(rush->last, rush->middle);
			ft_cp_row(row, rush->last);
			rush->size++;
		}
	}
	free(row);
	if (errcode == BRKNROW || errcode == EMPTYROW)
		return (NOTRUSH);
	return (RUSH);
}
