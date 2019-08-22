/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:09:22 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/14 16:13:22 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*ptr;

	ptr = begin_list;
	while (ptr != NULL)
	{
		if (!cmp(ptr->data, data_ref))
			return (ptr);
		ptr = ptr->next;
	}
	return (NULL);
}
