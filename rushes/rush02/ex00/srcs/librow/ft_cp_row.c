/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cp_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeri <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:31:02 by ggeri             #+#    #+#             */
/*   Updated: 2019/08/18 23:05:26 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_row.h"

/*
 ** This function copies data from src to dest.
 ** Type t_row defined in library ft_row.h.
*/

void	ft_cp_row(t_row *src, t_row *dest)
{
	dest->first = src->first;
	dest->middle = src->middle;
	dest->last = src->last;
	dest->size = src->size;
}
