/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zerofy_coords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 16:36:21 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 22:22:16 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int	zerofy_coords(t_coords *coords)
{
	coords->i = 0;
	coords->j = 0;
	coords->area = 0;
	return (OK);
}
