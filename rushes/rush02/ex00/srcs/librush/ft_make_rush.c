/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_rush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:15:42 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 23:19:12 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

/*
 ** This function make empty rush.
*/

t_rush			*ft_make_rush(void)
{
	t_rush	*rush;

	rush = (t_rush *)malloc(sizeof(t_rush));
	rush->first = ft_make_row();
	rush->middle = ft_make_row();
	rush->last = ft_make_row();
	rush->size = 0;
	return (rush);
}
