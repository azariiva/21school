/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_row.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeri <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:52:12 by ggeri             #+#    #+#             */
/*   Updated: 2019/08/18 23:09:39 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

/*
 ** This function makes empty row and returns it.
 ** Type t_row defined in library ft_row.h.
*/

t_row			*ft_make_row(void)
{
	t_row	*row;

	row = (t_row *)malloc(sizeof(t_row));
	row->first = 0;
	row->middle = 0;
	row->last = 0;
	row->size = 0;
	return (row);
}
