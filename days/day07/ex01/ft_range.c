/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 18:10:49 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/07 19:16:45 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *res;
	int *p_res;

	if (min >= max)
		return (NULL);
	res = (int *)malloc((max - min) * sizeof(int));
	p_res = res;
	while (min < max)
		*p_res++ = min++;
	return (res);
}
