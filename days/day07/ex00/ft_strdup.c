/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 17:59:16 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 23:00:52 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (*str++)
		++counter;
	return (counter);
}

char	*ft_strdup(char *src)
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
