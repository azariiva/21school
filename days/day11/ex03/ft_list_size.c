/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:59:36 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/13 21:03:13 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*ptr;
	int		ctr;

	ctr = 0;
	ptr = begin_list;
	while (ptr)
	{
		ptr = ptr->next;
		++ctr;
	}
	return (ctr);
}
