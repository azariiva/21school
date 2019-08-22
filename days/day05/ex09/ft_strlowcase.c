/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 18:16:31 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/05 18:16:33 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char		*ptr;
	static char lowcase_value;

	ptr = str;
	lowcase_value = 'a' - 'A';
	while (*ptr)
	{
		if (*ptr <= 'Z' && *ptr >= 'A')
		{
			*ptr += lowcase_value;
		}
		++ptr;
	}
	return (str);
}
