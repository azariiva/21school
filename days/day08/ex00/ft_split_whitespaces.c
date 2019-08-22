/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 21:59:50 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/08 07:46:55 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

unsigned int	ft_count_words(char *str)
{
	unsigned int ctr;

	ctr = 0;
	while (*str)
	{
		while (ft_is_whitespace(*str))
			++str;
		if (*str)
		{
			++ctr;
			while (!ft_is_whitespace(*str) && *str)
				++str;
		}
	}
	return (ctr);
}

unsigned int	ft_wordlen(char *str)
{
	unsigned int len;

	len = 0;
	while (*str && !ft_is_whitespace(*str))
	{
		++len;
		++str;
	}
	return (len);
}

void			ft_fill_res(char **res, char *str)
{
	unsigned int wordlen;
	unsigned int i;

	while (*str)
	{
		while (ft_is_whitespace(*str))
			++str;
		if (*str)
		{
			wordlen = ft_wordlen(str);
			*res = (char *)malloc((wordlen + 1) * sizeof(char));
			i = 0;
			while (i < wordlen)
				(*res)[i++] = *str++;
			(*res++)[i] = 0;
		}
	}
}

char			**ft_split_whitespaces(char *str)
{
	char			**res;
	unsigned int	l_res;

	l_res = ft_count_words(str);
	res = (char **)malloc((l_res + 1) * sizeof(char *));
	ft_fill_res(res, str);
	res[l_res] = 0;
	return (res);
}
