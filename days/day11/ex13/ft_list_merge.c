/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:44:30 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/14 16:48:35 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*ptr;

	ptr = *begin_list1;
	if (ptr == NULL)
		*begin_list1 = begin_list2;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = begin_list2;
	}
}
