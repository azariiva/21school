/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 20:08:59 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/14 20:25:39 by blinnea          ###   ########.fr       */
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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*elem;

	elem = ft_create_elem(data);
	*begin_list = merge(*begin_list, elem, cmp);
}
