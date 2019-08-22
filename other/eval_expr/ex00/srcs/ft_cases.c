/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:28:46 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 21:28:48 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calc.h"

void	case_op(t_stack_oper **op_begin, t_stack_val **val_begin, char op)
{
	t_stack_oper	*see;

	if (*op_begin)
	{
		if ((*op_begin)->next)
		{
			see = (*op_begin)->next;
			if (see->operation == '-')
			{
				if ((*op_begin)->operation == '+')
					(*op_begin)->operation = '-';
				else if ((*op_begin)->operation == '-')
					(*op_begin)->operation = '+';
			}
		}
		if (ft_precedence((*op_begin)->operation) >= ft_precedence(op))
			do_op(val_begin, get_val(val_begin),
					get_val(val_begin), get_oper(op_begin));
	}
	put_oper(op_begin, op);
}

void	case_close_parent(t_stack_oper **op_begin,
		t_stack_val **val_begin)
{
	while (((*op_begin)->operation) != '(')
	{
		do_op(val_begin, get_val(val_begin),
				get_val(val_begin), get_oper(op_begin));
	}
	get_oper(op_begin);
}
