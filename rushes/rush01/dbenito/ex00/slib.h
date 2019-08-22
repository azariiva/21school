/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 22:48:21 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/11 20:36:50 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLIB_H

# define SLIB_H

# include "ftlib.h"
# include "vlib.h"

# define IS_CELL(c) ('0' <= c && c <= '9' || c == '.')

typedef enum	e_err
{
	NOERR = 0,
	ARGCERR = -1,
	DUPERR = -2,
	CHARERR = -4,
	WORDERR = -8,
	MSOLERR = -16,
	NSOLERR = -32
}				t_err;

t_err	ft_to_sudoku(int argc, char **argv);
t_err	ft_is_correct(char **sudoku);
void	ft_put_obvious(char **sudoku);
int		ft_is_solved(char **sudoku);
t_err	ft_solve_brute(char **sudoku, t_var *varr);
void	ft_print(char **sudoku);

#endif
