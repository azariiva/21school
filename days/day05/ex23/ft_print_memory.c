/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:54:01 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/06 20:49:33 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

const char *g_base = "0123456789abcdef";

int		ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_putnbr_base(unsigned	int nbr)
{
	if (nbr)
	{
		ft_putnbr_base(nbr / 16);
		ft_putchar(g_base[nbr % 16]);
	}
}

void	ft_print_str(char *str, unsigned size)
{
	unsigned int i;

	i = 0;
	while (i < 16 - size)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (!((i + 1) % 2))
			ft_putchar(' ');
		i++;
	}
	i = 0;
	while (i <= size)
	{
		if (!ft_is_printable(str[i]))
			ft_putchar('.');
		else
			ft_putchar(str[i]);
		++i;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*p_addr;

	p_addr = (char *)addr;
	while (size)
	{
		ft_putnbr_base((unsigned)p_addr / 16);
		ft_putchar(g_base[(unsigned)p_addr % 16]);
		ft_putchar(':');
		ft_putchar(' ');
		i = 0;
		while (size > 0 && i < 16)
		{
			ft_putchar(g_base[p_addr[i] / 16]);
			ft_putchar(g_base[p_addr[i] % 16]);
			if (!((i++ + 1) % 2))
				ft_putchar(' ');
			--size;
		}
		if (i % 2)
			ft_putchar(' ');
		ft_print_str(p_addr, i);
		p_addr += 16;
	}
	return (addr);
}
