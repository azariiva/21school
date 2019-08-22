/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 20:35:00 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/14 20:44:17 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*merge(t_list *a, t_list *b, int (*cmp)())
{
	t_list	*res;

	if (a == NULL)
		return (b);
	if (b == NULL)
		return (a);
	if (cmp(a->data, b->data) <= 0)
	{
		res = a;
		res->next = merge(a->next, b, cmp);
	}
	else
	{
		res = b;
		res->next = merge(a, b->next, cmp);
	}
	return (res);
}

void	ft_sorted_list_merge(t_list **begin_list1, \
		t_list *begin_list2, int (*cmp)())
{
	*begin_list1 = merge(*begin_list1, begin_list2, cmp);
}
