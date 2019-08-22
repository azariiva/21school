/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:53:54 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/13 21:57:24 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*curr;
	t_list	*next;

	curr = *begin_list;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*begin_list = NULL;
}
