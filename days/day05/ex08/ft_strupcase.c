/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 18:09:13 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/05 18:11:05 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char		*ptr;
	static char upcase_value;

	ptr = str;
	upcase_value = 'A' - 'a';
	while (*ptr)
	{
		if (*ptr <= 'z' && *ptr >= 'a')
		{
			*ptr += upcase_value;
		}
		++ptr;
	}
	return (str);
}
