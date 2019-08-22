/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rowcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:33:07 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 23:05:29 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

/*
 ** This function checks is a equal to b.
 ** Type t_row defined in library ft_row.h.
*/

int	ft_equal_row(t_row *a, t_row *b)
{
	if (a->first != b->first)
		return (0);
	if (a->middle != b->middle)
		return (0);
	if (a->last != b->last)
		return (0);
	if (a->size != b->size)
		return (0);
	return (1);
}
