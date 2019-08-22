/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 20:53:03 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/06 16:21:27 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*ptr;
	int		i;

	ptr = dest;
	while (*ptr)
		++ptr;
	while (src[i] && i < nb)
		*(ptr++) = src[i++];
	*ptr = 0;
	return (dest);
}
