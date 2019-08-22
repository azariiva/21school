/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeri <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:02:19 by ggeri             #+#    #+#             */
/*   Updated: 2019/08/18 22:54:53 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

/*
 ** This function writes string str to stream.
*/

void	ft_putstr(int stream, const char *str)
{
	while (*str)
		ft_putchar(stream, *str++);
}
