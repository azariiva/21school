/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 18:18:32 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/07 13:34:18 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_is_alphanumeric(char c)
{
	char is_number;
	char is_letter;

	is_number = c >= '0' && c <= '9';
	is_letter = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	return (is_number || is_letter);
}

void	ft_lowcase(char *c)
{
	static char	lowcase_value;

	lowcase_value = 'a' - 'A';
	if (*c <= 'Z' && *c >= 'A')
		*c += lowcase_value;
}

void	ft_upcase(char *c)
{
	static char upcase_value;

	upcase_value = 'A' - 'a';
	if (*c <= 'z' && *c >= 'a')
		*c += upcase_value;
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		if (ft_is_alphanumeric(*ptr))
		{
			ft_upcase(ptr++);
			while (ft_is_alphanumeric(*ptr))
			{
				ft_lowcase(ptr);
				++ptr;
			}
		}
		else
			++ptr;
	}
	return (str);
}
