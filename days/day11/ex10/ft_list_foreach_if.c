/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 15:58:44 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/14 16:06:27 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
		void *data_ref, int (*cmp)(void *, void *))
{
	t_list	*ptr;

	ptr = begin_list;
	while (ptr != NULL)
	{
		if (!cmp(ptr->data, data_ref))
			f(ptr->data);
		ptr = ptr->next;
	}
}
