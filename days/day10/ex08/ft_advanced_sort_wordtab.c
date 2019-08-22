/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:06:33 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/13 17:10:30 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(*p_tab, *(p_tab + 1)) > 0)
			{
				unsorted = 1;
				ft_swap(p_tab, p_tab + 1);
			}
			++p_tab;
		}
	}
}
