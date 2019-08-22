/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 01:20:37 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 01:20:38 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if ((*s1 == '\0' && *s2 == '\0') || (*s1 == '\0' && *s2 == ' '))
			return (1);
	return (0);
}

char	*ft_escape_space(char *str)
{
	int i;

	while (str[0] != '\0' && str[0] == ' ')
	{
		i = 0;
		while (str[i] != '\0')
		{
			str[i] = str[i + 1];
			i++;
		}
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 0)
		return (0);
	while (i < argc)
	{
		if (ft_strcmp("president", ft_strlowcase(ft_escape_space(argv[i]))) == 0
	|| ft_strcmp("attack", ft_strlowcase(ft_escape_space(argv[i]))) == 0
	|| ft_strcmp("bauer", ft_strlowcase(ft_escape_space(argv[i]))) == 0)
			write(1, "Alert!!!\n", 9);
		i++;
	}
	return (0);
}
