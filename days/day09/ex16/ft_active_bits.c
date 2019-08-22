/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 08:39:56 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/09 08:40:13 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int	ctr;

	ctr = (value < 0);
	value &= 0x7fffffff;
	while (value)
	{
		ctr += (value & 1);
		value >>= 1;
	}
	return (ctr);
}
