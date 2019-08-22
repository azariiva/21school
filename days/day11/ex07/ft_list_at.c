/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 22:02:35 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/13 22:13:26 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
