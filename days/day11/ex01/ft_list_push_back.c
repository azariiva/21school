/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:05:32 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/13 20:16:15 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *ptr;

	ptr = *begin_list;
	if (ptr == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = ft_create_elem(data);
	}
}
