/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:17:04 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/14 16:33:29 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*ptr;
	t_list	*killme;

	ptr = *begin_list;
	while (ptr != NULL && !cmp(ptr->data, data_ref))
	{
		killme = ptr;
		ptr = ptr->next;
		free(killme);
	}
	*begin_list = ptr;
	if (ptr == NULL)
		return ;
	while (ptr->next != NULL)
	{
		if (!cmp(ptr->next->data, data_ref))
		{
			killme = ptr->next;
			ptr->next = ptr->next->next;
			free(killme);
		}
		else
			ptr = ptr->next;
	}
}
