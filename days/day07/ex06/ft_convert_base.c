/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 04:56:05 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/08 07:44:31 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str)
	{
		++counter;
		++str;
	}
	return (counter);
}

int		get_char_val(char c, char *base)
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

int		ft_get_int(char *nbr, char *base, int v_base)
{
	int		res;
	char	neg;
	int		char_val;

	res = 0;
	if (*nbr == '+' || *nbr == '-')
		neg = (*nbr++ == '-');
	while (*nbr)
	{
		res *= v_base;
		if ((char_val = get_char_val(*nbr++, base)) == -1)
			return (neg ? -res : res);
		res += char_val;
	}
	return (neg ? -res : res);
}

char	*ft_get_res(int dec_repr, int v_base_to, int len, char *base_to)
{
	char *res;
	char neg;

	neg = (dec_repr < 0);
	res = (char *)malloc((len + 1) * sizeof(char));
	res[len--] = 0;
	if (!dec_repr)
		res[len] = base_to[0];
	if (neg)
	{
		res[0] = '-';
		res[len--] = base_to[-1 * (dec_repr % v_base_to)];
		dec_repr = -1 * (dec_repr / v_base_to);
	}
	while (dec_repr)
	{
		res[len--] = base_to[dec_repr % v_base_to];
		dec_repr /= v_base_to;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				v_base_from;
	int				v_base_to;
	int				dec_repr;
	int				dec_repr_cpy;
	unsigned int	len;

	v_base_from = ft_strlen(base_from);
	v_base_to = ft_strlen(base_to);
	dec_repr = ft_get_int(nbr, base_from, v_base_from);
	len = (dec_repr < 0);
	dec_repr_cpy = dec_repr;
	if (!dec_repr_cpy)
		++len;
	while (dec_repr_cpy)
	{
		dec_repr_cpy /= v_base_to;
		++len;
	}
	return (ft_get_res(dec_repr, v_base_to, len, base_to));
}
