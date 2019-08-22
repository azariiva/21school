/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeri <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:18:13 by ggeri             #+#    #+#             */
/*   Updated: 2019/08/19 14:14:18 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ft.h"

/*
 ** This function recursively writes integer nb to stream.
*/

void	ft_help_putnbr(int stream, int nb)
{
	if (nb != 0)
	{
		ft_help_putnbr(stream, nb / 10);
		ft_putchar(stream, nb % 10 + '0');
	}
}

void	ft_putnbr(int stream, int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr(stream, "-2147483648");
		return ;
	}
	else if (nb < 0)
	{
		nb = -nb;
		ft_putchar(stream, '-');
	}
	if (nb != 0)
		ft_help_putnbr(stream, nb);
	else
		ft_putchar(stream, '0');
}
