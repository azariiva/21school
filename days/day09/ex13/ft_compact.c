/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 05:46:48 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 06:06:19 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int	i;
	int	j;

	i = 0;
	while (i < length)
	{
		while (tab[i])
			++i;
		j = i;
		--length;
		while (j < length)
		{
			tab[j] = tab[j + 1];
			j++;
		}
	}
	return (length);
}
