/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:33:44 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 22:24:03 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"
#include "ft_rush.h"

int		main(void)
{
	t_rush		*rush;
	int			*rush_x;

	rush = ft_make_rush();
	if (ft_get_rush(STDIN, rush) != RUSH)
		ft_putstr(STDOUT, "aucune\n");
	else
	{
		rush_x = ft_which_rush(rush);
		if (!ft_formatted_output(STDOUT, rush_x, rush))
			ft_putstr(STDOUT, "aucune\n");
		free(rush_x);
	}
	ft_free_rush(rush);
	return (0);
}
