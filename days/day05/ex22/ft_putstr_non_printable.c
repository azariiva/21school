/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 19:28:04 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/06 19:39:14 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_putstr_non_printable(char *str)
{
	const char *hex_codes = "0123456789abcdef";

	while (*str)
	{
		if (!ft_is_printable(*str))
		{
			ft_putchar('\\');
			ft_putchar(hex_codes[*str / 16]);
			ft_putchar(hex_codes[*str % 16]);
		}
		else
			ft_putchar(*str);
		++str;
	}
}
