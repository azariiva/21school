/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 17:45:20 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/05 13:22:46 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_help_putnbr(int nb)
{
	if (nb != 0)
	{
		ft_help_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*(str++));
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		if (nb != 0)
		{
			ft_help_putnbr(nb);
		}
		else
		{
			ft_putchar('0');
		}
	}
}
