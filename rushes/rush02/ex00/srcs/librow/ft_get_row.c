/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_row.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:46:22 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 23:08:39 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_row.h"

/*
 ** This function gets row from stream and handles errors defined in ft_row.h.
 ** Type t_row defined in library ft_row.h
*/

int	ft_get_row(int stream, t_row *row)
{
	char c;

	row->first = 0;
	row->middle = 0;
	row->last = 0;
	row->size = 0;
	if ((c = ft_getchar(stream)) && c != '\n')
	{
		row->first = c;
		row->size++;
		while ((c = ft_getchar(stream)) && c != '\n')
		{
			if (row->middle && row->last != row->middle)
				return (BRKNROW);
			row->middle = row->last;
			row->last = c;
			row->size++;
		}
	}
	else if (!c)
		return (ENDOFIN);
	else if (!row->first && c == '\n')
		return (EMPTYROW);
	return (OK);
}
