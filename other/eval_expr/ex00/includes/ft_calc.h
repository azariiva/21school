/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:30:14 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 21:35:45 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CALC_H

# define FT_CALC_H

# include "ft_stack_val.h"
# include "ft_stack_op.h"
# include "ft_io.h"
# include "ft_split_whitespaces.h"

int		ft_is_op(char *tab);
int		ft_is_parent(char *tab);
int		ft_precedence(char a);
void	do_op(t_stack_val **val_begin, int b, int a, char op);
void	case_op(t_stack_oper **op_begin, t_stack_val **val_begin, char op);
void	case_close_parent(t_stack_oper **op_begin,
		t_stack_val **val_begin);
int		ft_write(char **tab, t_stack_oper **op_begin, t_stack_val **val_begin);
int		eval_expr(char *av);

#endif
