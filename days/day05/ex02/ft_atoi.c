/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 22:46:47 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/06 15:44:09 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 0;
	while (*str == ' ' || (*str > 8 && *str < 13) || *str == '\r')
		++str;
	if (*str == '-')
	{
		sign = 1;
		++str;
	}
	else if (*str == '+')
		++str;
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += (*str - '0');
		++str;
	}
	if (sign)
		return (-result);
	return (result);
}
