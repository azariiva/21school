/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 23:15:21 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 23:34:19 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_help_putnbr(int nb)
{
	if (nb != 0)
	{
		ft_help_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		if (nb != 0)
			ft_help_putnbr(nb);
		else
			ft_putchar('0');
	}
	ft_putchar('\n');
}

void	ft_show_tab(t_stock_par *par)
{
	t_stock_par	*p_par;
	char		**p_tab;

	p_par = par;
	while (p_par->str)
	{
		ft_putstr(p_par->copy);
		ft_putnbr(p_par->size_param);
		p_tab = p_par->tab;
		while (*p_tab)
			ft_putstr(*p_tab++);
		++p_par;
	}
}
