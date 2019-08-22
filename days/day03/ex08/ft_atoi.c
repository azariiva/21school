/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 22:46:47 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/05 14:14:35 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int multiplier;
	int result;

	multiplier = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 12) || *str == '\r')
		++str;
	if (*str == '-')
	{
		multiplier = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += multiplier * (*str - '0');
		++str;
	}
	return (result);
}
