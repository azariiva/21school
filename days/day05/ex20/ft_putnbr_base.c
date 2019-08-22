/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 18:04:48 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/06 18:13:22 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_is_alphanumeric(char c)
{
	char is_number;
	char is_letter;

	is_number = c >= '0' && c <= '9';
	is_letter = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	return (is_number || is_letter);
}

int		ft_get_base_div(char *base)
{
	char	*p_base;
	int		i;

	p_base = base;
	while (*p_base)
	{
		if (!ft_is_alphanumeric(*p_base))
			return (0);
		i = 1;
		while (p_base[i])
			if (p_base[i++] == *p_base)
				return (0);
		++p_base;
	}
	if (p_base - base < 2)
		return (0);
	return (p_base - base);
}

void	ft_help_putnbr_base(int nbr, int base_div, char *base)
{
	if (nbr)
	{
		ft_help_putnbr_base(nbr / base_div, base_div, base);
		ft_putchar(base[nbr % base_div]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_div;

	if (!(base_div = ft_get_base_div(base)))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_help_putnbr_base(-(nbr / base_div), base_div, base);
		ft_putchar(base[-(nbr % base_div)]);
	}
	else
	{
		ft_help_putnbr_base(nbr / base_div, base_div, base);
		ft_putchar(base[nbr % base_div]);
	}
}
