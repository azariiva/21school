/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 16:14:59 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/06 16:18:02 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*p_dest;
	char			*p_src;
	unsigned int	i;

	p_dest = dest;
	p_src = src;
	i = size;
	if (i)
	{
		while (--i)
		{
			if ((*(p_dest++) = *(p_src++)) == 0)
				break ;
		}
	}
	if (!i)
	{
		if (size)
			*p_dest = 0;
		while (*(p_src++))
			;
	}
	return (p_src - src - 1);
}
