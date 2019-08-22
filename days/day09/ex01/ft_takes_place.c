/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 17:25:48 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/08 17:57:23 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*get_time_m(int hour, int *x)
{
	if (hour % 12 == 0)
		*x = 12;
	else
		*x = hour % 12;
	if (hour % 24 < 12)
		return ("A.M.");
	return ("P.M.");
}

void	ft_takes_place(int hour)
{
	int		x;
	char	*x_m;
	int		y;
	char	*y_m;

	x_m = get_time_m(hour, &x);
	y_m = get_time_m(hour + 1, &y);
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %s AND %d.00 %s\n", x, x_m, y, y_m);
}
