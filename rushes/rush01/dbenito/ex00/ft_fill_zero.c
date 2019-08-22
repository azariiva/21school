/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 14:59:39 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/11 15:04:43 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_zero(void *arr, int size)
{
	char *ptr;

	ptr = (char *)arr;
	while (--size != -1)
		ptr[size] = 0;
}
