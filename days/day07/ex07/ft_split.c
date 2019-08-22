/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 07:44:03 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/08 08:02:19 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_is_whitespace(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

unsigned int	ft_count_words(char *str, char *charset)
{
	unsigned int ctr;

	ctr = 0;
	while (*str)
	{
		while (ft_is_whitespace(*str, charset))
			++str;
		if (*str)
		{
			++ctr;
			while (!ft_is_whitespace(*str, charset) && *str)
				++str;
		}
	}
	return (ctr);
}

unsigned int	ft_wordlen(char *str, char *charset)
{
	unsigned int len;

	len = 0;
	while (*str && !ft_is_whitespace(*str, charset))
	{
		++len;
		++str;
	}
	return (len);
}

void			ft_fill_res(char **res, char *str, char *charset)
{
	unsigned int wordlen;
	unsigned int i;

	while (*str)
	{
		while (ft_is_whitespace(*str, charset))
			++str;
		if (*str)
		{
			wordlen = ft_wordlen(str, charset);
			*res = (char *)malloc((wordlen + 1) * sizeof(char));
			i = 0;
			while (i < wordlen)
				(*res)[i++] = *str++;
			(*res++)[i] = 0;
		}
	}
}

char			**ft_split(char *str, char *charset)
{
	char			**res;
	unsigned int	l_res;

	l_res = ft_count_words(str, charset);
	res = (char **)malloc((l_res + 1) * sizeof(char *));
	ft_fill_res(res, str, charset);
	res[l_res] = 0;
	return (res);
}
