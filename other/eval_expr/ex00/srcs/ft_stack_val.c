/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_val.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:29:13 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 21:35:02 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack_val.h"

void			put_val(t_stack_val **begin, int number)
{
	t_stack_val	*obj;

	obj = (t_stack_val*)malloc(sizeof(t_stack_val));
	obj->value = number;
	obj->next = *begin;
	*begin = obj;
}

int				get_val(t_stack_val **begin)
{
	int			number;
	t_stack_val	*tmp;

	number = (*begin)->value;
	tmp = *begin;
	*begin = (*begin)->next;
	free(tmp);
	return (number);
}
