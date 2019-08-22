/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 22:32:44 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 23:09:51 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int			ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str++)
		++counter;
	return (counter);
}

char		*ft_strdup(char *src)
{
	char *res;
	char *p_res;

	res = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	p_res = res;
	while (*src)
		*p_res++ = *src++;
	*p_res = 0;
	return (res);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*res;
	int			i;

	res = (t_stock_par *)malloc((ac + 1) * sizeof(t_stock_par));
	i = 0;
	while (i < ac)
	{
		res[i].size_param = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		res[i].tab = ft_split_whitespaces(av[i]);
		++i;
	}
	res[i].str = 0;
	return (res);
}
