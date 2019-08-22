/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 20:26:02 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/11 21:44:40 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "slib.h"
#include "vlib.h"

void	ft_show_err(t_err errcode)
{
	if (errcode == ARGCERR)
		ft_putstr("ERROR: incorrect number of args\n");
	if (errcode == CHARERR)
		ft_putstr("ERROR: wrong character in line\n");
	if (errcode == WORDERR)
		ft_putstr("ERROR: wrong word length\n");
	if (errcode == DUPERR)
		ft_putstr("ERROR: wrong input data\n");
	if (errcode == MSOLERR)
		ft_putstr("ERROR: multiple solutions\n");
	if (errcode == NSOLERR)
		ft_putstr("ERROR: no solution\n");
}

int		main(int argc, char **argv)
{
	t_err	errcode;
	t_var	*varr;

	if ((errcode = ft_to_sudoku(argc, ++argv)) != NOERR)
	{
		ft_show_err(errcode);
		return (errcode);
	}
	if ((errcode = ft_is_correct(argv)) != NOERR)
	{
		ft_show_err(errcode);
		return (errcode);
	}
	ft_put_obvious(argv);
	varr = ft_make_varr(argv);
	if ((errcode = ft_solve_brute(argv, varr)) != NOERR)
	{
		ft_show_err(errcode);
		return (errcode);
	}
	ft_print(argv);
	free(varr);
	return (NOERR);
}
