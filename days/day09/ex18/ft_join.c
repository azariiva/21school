/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 09:55:52 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 11:08:35 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int counter;

	counter = 0;
	while (*str++)
		++counter;
	return (counter);
}

unsigned int	ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	return (i);
}

unsigned int	ft_get_res_len(char **tab, unsigned int l_sep)
{
	unsigned int l_res;

	l_res = 0;
	while (*tab)
		l_res += l_sep + ft_strlen(*tab++);
	l_res -= l_sep;
	return (l_res);
}

char			*ft_join(char **tab, char *sep)
{
	char			*res;
	unsigned int	l_res;
	unsigned int	l_sep;
	char			*p_res;

	if (!*tab)
	{
		res = (char *)malloc(1 * sizeof(char));
		res[0] = 0;
		return (res);
	}
	l_sep = ft_strlen(sep);
	l_res = ft_get_res_len(tab, l_sep);
	res = (char *)malloc((l_res + 1) * sizeof(char));
	res[l_res] = 0;
	p_res = res;
	while (*tab)
	{
		p_res += ft_strcpy(p_res, *tab++);
		if (*tab)
			p_res += ft_strcpy(p_res, sep);
	}
	return (res);
}
