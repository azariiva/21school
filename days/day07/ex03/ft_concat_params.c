/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 19:25:20 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/07 21:16:42 by blinnea          ###   ########.fr       */
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

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*res;
	char	*p_res;
	char	*p_argv;
	int		res_len;

	res_len = 0;
	i = 1;
	while (i < argc)
		res_len += ft_strlen(argv[i++]) + 1;
	res = (char *)malloc(res_len * sizeof(char));
	p_res = res;
	i = 1;
	while (i < argc)
	{
		p_argv = argv[i++];
		while (*p_argv)
			*p_res++ = *p_argv++;
		if (i != argc)
			*p_res++ = '\n';
	}
	return (res);
}
