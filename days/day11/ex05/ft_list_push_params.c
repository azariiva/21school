/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:39:24 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/13 21:46:02 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*head;
	t_list	*ptr;

	head = ft_create_elem(av[--ac]);
	ptr = head;
	while (--ac > -1)
	{
		ptr->next = ft_create_elem(av[ac]);
		ptr = ptr->next;
	}
	return (head);
}
