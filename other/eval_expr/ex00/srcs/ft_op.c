/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:28:59 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 21:29:01 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calc.h"

int		ft_is_op(char *tab)
{
	if (!tab[1])
		return (tab[0] == '+' || tab[0] == '-' ||
				tab[0] == '/' || tab[0] == '*' || tab[0] == '%');
	else
		return (0);
}

int		ft_is_parent(char *tab)
{
	if (!tab[1])
	{
		if (tab[0] == '(')
			return (1);
		if (tab[0] == ')')
			return (2);
	}
	return (0);
}

int		ft_precedence(char a)
{
	if (a == '+' || a == '-')
		return (0);
	if (a == '/' || a == '*' ||
			a == '%')
		return (1);
	return (-1);
}

void	do_op(t_stack_val **val_begin, int b, int a, char op)
{
	int res;

	if (op == '+')
		res = a + b;
	if (op == '-')
		res = a - b;
	if (op == '*')
		res = a * b;
	if (op == '/')
		res = a / b;
	if (op == '%')
		res = a % b;
	put_val(val_begin, res);
}
