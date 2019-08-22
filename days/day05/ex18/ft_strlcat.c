/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:41:06 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/06 13:56:13 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strlen(char *str)
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

unsigned long int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*p_dest;
	char			*p_src;
	unsigned int	i;
	unsigned int	l_dest;

	p_dest = dest;
	p_src = src;
	i = size;
	while (i-- && *p_dest)
		++p_dest;
	l_dest = p_dest - dest;
	i = size - l_dest;
	if (!i)
		return (l_dest + ft_strlen(p_src));
	while (*p_src)
	{
		if (i != 1)
		{
			*(p_dest++) = *p_src;
			--i;
		}
		++p_src;
	}
	*p_dest = 0;
	return (l_dest + (p_src - src));
}
