/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeri <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 16:37:08 by ggeri             #+#    #+#             */
/*   Updated: 2019/08/18 22:40:15 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

/*
 ** This function reads character from stream and returns it.
*/

char	ft_getchar(int stream)
{
	char	c;

	if (read(stream, &c, 1) <= 0)
		return (0);
	return (c);
}
