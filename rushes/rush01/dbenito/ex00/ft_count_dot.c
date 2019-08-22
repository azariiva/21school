/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_dot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 20:08:30 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/11 20:11:31 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_count_dot(char *str_variant)
{
	int		cnt;
	int		count_dot;

	cnt = 0;
	count_dot = 0;
	while (cnt < 9)
	{
		if (str_variant[cnt] == 0)
			count_dot++;
		cnt++;
	}
	return (count_dot);
}
