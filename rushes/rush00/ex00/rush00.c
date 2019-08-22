/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 15:27:08 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/04 18:50:30 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_edge(int x)
{
	int i;

	if (!x)
	{
		return ;
	}
	i = 0;
	ft_putchar('o');
	if (x != 1)
	{
		while (i < x - 2)
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_middle(int x)
{
	if (!x)
	{
		return ;
	}
	ft_putchar('|');
	if (x != 1)
	{
		while (x-- > 2)
		{
			ft_putchar(' ');
		}
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y > 1)
	{
		ft_edge(x);
		while (y > 2)
		{
			ft_middle(x);
			y--;
		}
		ft_edge(x);
	}
	else if (y > 0)
	{
		ft_edge(x);
	}
}
