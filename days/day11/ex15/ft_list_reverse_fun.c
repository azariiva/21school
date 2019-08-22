/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 18:50:55 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/14 20:02:58 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *ptr;

	ptr = begin_list;
	while (nbr--)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	return (ptr);
}

void	ft_list_swap_data(t_list *a, t_list *b)
{
	void	*tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		list_mid;
	int		list_size;
	int		i;

	list_size = ft_list_size(begin_list);
	list_mid = list_size / 2;
	i = 0;
	while (i < list_mid)
	{
		ft_list_swap_data(ft_list_at(begin_list, i), \
				ft_list_at(begin_list, list_size - i - 1));
		++i;
	}
}
