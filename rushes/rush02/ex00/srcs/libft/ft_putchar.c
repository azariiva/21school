/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeri <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:28:05 by ggeri             #+#    #+#             */
/*   Updated: 2019/08/18 22:52:04 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

/*
 ** This function writes character c to stream.
*/

void	ft_putchar(int stream, char c)
{
	write(stream, &c, 1);
}
