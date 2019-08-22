/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_rush.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 16:53:02 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 23:19:44 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

/*
 ** This function detects which rush is given.
*/

int	*ft_which_rush(t_rush *rush)
{
	int	*rush_x;

	rush_x = (int *)malloc(5 * sizeof(int));
	rush_x[0] = ft_is_rush00(rush);
	rush_x[1] = ft_is_rush01(rush);
	rush_x[2] = ft_is_rush02(rush);
	rush_x[3] = ft_is_rush03(rush);
	rush_x[4] = ft_is_rush04(rush);
	return (rush_x);
}
