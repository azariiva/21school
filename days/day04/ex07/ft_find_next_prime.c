/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 20:58:37 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/03 21:25:19 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
	{
		return (0);
	}
	i = 2;
	while (i * i <= nb)
	{
		if (!(nb % i))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	if (!(nb % 2))
	{
		++nb;
	}
	while (!ft_is_prime(nb))
	{
		nb += 1;
	}
	return (nb);
}
