/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 22:47:58 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/02 22:48:02 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
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

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

char	*ft_strrev(char *str)
{
	int	iter1;
	int	iter2;

	iter1 = 0;
	iter2 = ft_strlen(str) - 1;
	while (iter1 < iter2)
	{
		ft_swap(str + iter1, str + iter2);
		++iter1;
		--iter2;
	}
	return (str);
}
