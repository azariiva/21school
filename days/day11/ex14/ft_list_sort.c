/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 16:50:31 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/14 18:02:09 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_split(t_list *source, t_list **front, t_list **back)
{
	t_list	*fast;
	t_list	*slow;

	*front = source;
	slow = source;
	fast = source->next;
	while (fast != NULL)
	{
		fast = fast->next;
		if (fast != NULL)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	*back = slow->next;
	slow->next = NULL;
}

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

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*head;
	t_list	*a;
	t_list	*b;

	head = *begin_list;
	if (head == NULL || head->next == NULL)
		return ;
	ft_split(head, &a, &b);
	ft_list_sort(&a, cmp);
	ft_list_sort(&b, cmp);
	*begin_list = merge(a, b, cmp);
}
