/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_brute.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 16:28:29 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/11 20:57:45 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "slib.h"

t_err	ft_solve_brute(char **sudoku, t_var *varr)
{
	char	solved;
	t_var	*p_varr;

	solved = 0;
	while (!solved)
	{
		p_varr = varr;
		while (p_varr->body)
		{
			p_varr[1].iter += p_varr->iter / p_varr->size;
			if (!(p_varr + 1)->body && (p_varr + 1)->iter)
				return (NSOLERR);
			p_varr->iter %= p_varr->size;
			++p_varr;
		}
		p_varr = varr - 1;
		while ((++p_varr)->body)
			*(p_varr->p_cell) = p_varr->body[p_varr->iter];
		if (ft_is_solved(sudoku) != DUPERR)
			solved = 1;
		varr->iter++;
	}
	if (varr->body && ft_solve_brute(sudoku, varr) != NSOLERR)
		return (MSOLERR);
	return (NOERR);
}
