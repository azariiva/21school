/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 07:04:19 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 07:19:34 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_perso.h"

int		count_persons(char *str)
{
	int ctr;

	ctr = 1;
	while (*str)
		if (*str++ == ';')
			++ctr;
	return (ctr);
}

int		ft_strlen(char *str)
{
	int ctr;

	ctr = 0;
	while (*str && *str++ != ';')
		++ctr;
	return (ctr);
}

char	*ft_strdup(char **str)
{
	char	*ret;
	int		i;

	i = 0;
	ret = (char *)malloc((ft_strlen(*str) + 1) * sizeof(char));
	while (*str && **str != ';')
		ret[i++] = *((*str)++);
	ret[i] = 0;
	(*str)++;
	return (ret);
}

int		ft_atoi(char **str)
{
	int sign;
	int result;

	sign = 0;
	while (**str == ' ' || (**str > 8 && **str < 13) || **str == '\r')
		++(*str);
	if (**str == '-')
	{
		sign = 1;
		++(*str);
	}
	else if (**str == '+')
		++(*str);
	result = 0;
	while (**str >= '0' && **str <= '9')
	{
		result *= 10;
		result += (**str - '0');
		++(*str);
	}
	++(*str);
	if (sign)
		return (-result);
	return (result);
}

t_perso	**ft_decrypt(char *str)
{
	t_perso	**res;
	int		persons_ctr;
	int		i;

	persons_ctr = count_persons(str);
	res = (t_perso **)malloc((persons_ctr + 1) * sizeof(t_perso *));
	res[persons_ctr] = 0;
	i = 0;
	while (i < persons_ctr)
	{
		res[i] = (t_perso *)malloc(sizeof(t_perso *));
		res[i]->age = ft_atoi(&str);
		res[i]->name = ft_strdup(&str);
		++i;
	}
	return (res);
}
