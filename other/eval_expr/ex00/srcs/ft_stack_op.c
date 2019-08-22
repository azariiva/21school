/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_oper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:29:09 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 21:34:33 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack_op.h"

void			put_oper(t_stack_oper **begin, char simbol)
{
	t_stack_oper	*obj;

	obj = (t_stack_oper*)malloc(sizeof(t_stack_oper));
	obj->operation = simbol;
	obj->next = *begin;
	*begin = obj;
}

char			get_oper(t_stack_oper **begin)
{
	char			simbol;
	t_stack_oper	*tmp;

	simbol = (*begin)->operation;
	tmp = *begin;
	*begin = (*begin)->next;
	free(tmp);
	return (simbol);
}
