/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 11:35:40 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 12:00:27 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int	i;
	int j;
	int ctr;

	i = 0;
	while (i < length)
	{
		j = 0;
		ctr = 0;
		while (j < length)
			ctr += (tab[i] == tab[j++]);
		if (ctr % 2)
			return (tab[i]);
		++i;
	}
	return (0);
}
