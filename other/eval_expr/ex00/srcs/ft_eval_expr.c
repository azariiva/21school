/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:28:49 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 21:28:52 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calc.h"

int		ft_write(char **tab, t_stack_oper **op_begin, t_stack_val **val_begin)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (ft_is_parent(tab[i]) == 1)
			put_oper(op_begin, tab[i][0]);
		else if (ft_is_parent(tab[i]) == 2)
			case_close_parent(op_begin, val_begin);
		else if (!ft_is_op(tab[i]))
			put_val(val_begin, ft_atoi(tab[i]));
		else if (ft_is_op(tab[i]))
			case_op(op_begin, val_begin, tab[i][0]);
		i++;
	}
	while (*op_begin)
		do_op(val_begin, get_val(val_begin),
				get_val(val_begin), get_oper(op_begin));
	return (get_val(val_begin));
}

int		eval_expr(char *av)
{
	t_stack_val		*val_begin;
	t_stack_oper	*op_begin;
	char			**tab;
	int				res;

	val_begin = NULL;
	op_begin = NULL;
	if (!(*av))
		return (0);
	tab = ft_split_whitespaces(av);
	res = ft_write(tab, &op_begin, &val_begin);
	return (res);
}
