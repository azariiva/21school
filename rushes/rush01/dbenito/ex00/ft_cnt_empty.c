/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cnt_empty.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 19:38:54 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/11 20:05:29 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_cnt_empty(char **argv)
{
	int i;
	int j;
	int ctr;

	ctr = 0;
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
			ctr += (!argv[i][j++]);
		++i;
	}
	return (ctr);
}
