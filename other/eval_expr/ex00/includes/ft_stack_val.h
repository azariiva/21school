/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_val.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:30:31 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 21:36:13 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_VAL_H
# define FT_STACK_VAL_H

# include <stdlib.h>

typedef	struct			s_stack_val
{
	int					value;
	struct s_stack_val	*next;
}						t_stack_val;

void					put_val(t_stack_val **begin, int number);
int						get_val(t_stack_val **begin);

#endif
