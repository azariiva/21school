/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_oper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:30:27 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 21:36:37 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_OP_H
# define FT_STACK_OP_H

# include <stdlib.h>

typedef struct			s_stack_oper
{
	char				operation;
	struct s_stack_oper	*next;
}						t_stack_oper;

void					put_oper(t_stack_oper **begin, char simbol);
char					get_oper(t_stack_oper **begin);

#endif
