/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 18:30:12 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/06 18:53:39 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_is_alphanumeric(char c)
{
	char is_number;
	char is_letter;

	is_number = c >= '0' && c <= '9';
	is_letter = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	return (is_number || is_letter);
}

int		ft_get_base_mul(char *base)
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

int		ft_get_char_val(char c, char *base)
{
	int char_val;

	char_val = 0;
	while (base[char_val])
	{
		if (c == base[char_val])
			return (char_val);
		++char_val;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	char	sign;
	int		result;
	int		base_mul;
	int		val;

	if (!(base_mul = ft_get_base_mul(base)))
		return (0);
	sign = 0;
	if (*str == '-' || *str == '+')
	{
		sign = (*str++ == '-');
	}
	result = 0;
	while (*str)
	{
		result *= base_mul;
		if ((val = ft_get_char_val(*str, base)) == -1)
			return (0);
		result += val;
		++str;
	}
	if (sign)
		return (-result);
	return (result);
}
