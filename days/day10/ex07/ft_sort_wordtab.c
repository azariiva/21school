/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 16:31:19 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/13 16:43:49 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	char	unsorted;
	char	**p_tab;

	unsorted = 1;
	while (unsorted)
	{
		unsorted = 0;
		p_tab = tab;
		while (*(p_tab + 1))
		{
			if (ft_strcmp(*p_tab, *(p_tab + 1)) > 0)
			{
				unsorted = 1;
				ft_swap(p_tab, p_tab + 1);
			}
			++p_tab;
		}
	}
}
