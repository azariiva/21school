/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatted_output.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 17:58:57 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 23:16:09 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

/*
 ** This function write result to stream in given format.
*/

int			ft_formatted_output(int stream, int *rush_x, t_rush *rush)
{
	const char	*names[] = {"[rush-00]", "[rush-01]", "[rush-02]", "[rush-03]",\
		"[rush-04]"};
	int			i;
	int			flag;

	flag = 0;
	i = -1;
	while (++i < 5)
	{
		if (rush_x[i])
		{
			if (flag)
				ft_putstr(stream, " || ");
			flag = 1;
			ft_putstr(stream, names[i]);
			ft_putstr(stream, " [");
			ft_putnbr(stream, rush->first->size);
			ft_putstr(stream, "] [");
			ft_putnbr(stream, rush->size);
			ft_putstr(stream, "]");
		}
	}
	if (flag)
		ft_putchar(stream, '\n');
	return (flag);
}
