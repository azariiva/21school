/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 16:01:48 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/04 18:35:08 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_start(int x)
{
	int i;

	if (x <= 0)
	{
		return ;
	}
	i = 0;
	ft_putchar('A');
	if (x != 1)
	{
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	ft_middle(int x)
{
	if (x <= 0)
	{
		return ;
	}
	ft_putchar('B');
	if (x != 1)
	{
		while (x-- > 2)
		{
			ft_putchar(' ');
		}
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ft_finish(int x)
{
	int i;

	if (x <= 0)
	{
		return ;
	}
	i = 0;
	ft_putchar('C');
	if (x != 1)
	{
		while (i < x - 2)
		{
			ft_putchar('B');
			i++;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y > 1)
	{
		ft_start(x);
		while (y > 2)
		{
			ft_middle(x);
			y--;
		}
		ft_finish(x);
	}
	else if (y > 0)
	{
		ft_start(x);
	}
}
