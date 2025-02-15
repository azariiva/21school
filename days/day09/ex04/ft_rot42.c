/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 20:26:28 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/08 20:32:00 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	char *p_str;

	p_str = str;
	while (*p_str)
	{
		if ('a' <= *p_str && *p_str <= 'z')
			*p_str = (*p_str - 'a' + 42) % 26 + 'a';
		else if ('A' <= *p_str && *p_str <= 'Z')
			*p_str = (*p_str - 'A' + 42) % 26 + 'A';
		++p_str;
	}
	return (str);
}
