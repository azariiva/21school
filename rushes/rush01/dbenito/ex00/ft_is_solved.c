/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_solved.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 16:59:53 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/11 17:03:01 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "slib.h"

t_err		ft_issol_column(char **sudoku, int index)
{
	int		i;
	char	marks[10];

	ft_fill_zero(marks, 10);
	i = 0;
	while (i < 9)
	{
		if (marks[(int)sudoku[i][index]])
			return (DUPERR);
		marks[(int)sudoku[i][index]] = 1;
		++i;
	}
	return (NOERR);
}

t_err		ft_issol_line(char *line)
{
	int		i;
	char	marks[10];

	ft_fill_zero(marks, 10);
	i = 0;
	while (i < 9)
	{
		if (marks[(int)line[i]])
			return (DUPERR);
		marks[(int)line[i]] = 1;
		++i;
	}
	return (NOERR);
}

t_err		ft_issol_sector(char **sudoku, int x, int y)
{
	int		i;
	int		j;
	char	marks[10];

	ft_fill_zero(marks, 10);
	i = (x / 3) * 3;
	while (i < (x / 3 + 1) * 3)
	{
		j = (y / 3) * 3;
		while (j < (y / 3 + 1) * 3)
		{
			if (marks[(int)sudoku[i][j]])
				return (DUPERR);
			marks[(int)sudoku[i][j]] = 1;
			++j;
		}
		++i;
	}
	return (NOERR);
}

t_err		ft_is_solved(char **sudoku)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		if (ft_issol_line(sudoku[i]) == DUPERR)
			return (DUPERR);
		if (ft_issol_column(sudoku, i) == DUPERR)
			return (DUPERR);
		++i;
	}
	i = 1;
	while (i < 9)
	{
		j = 1;
		while (j < 9)
		{
			if (ft_issol_sector(sudoku, i, j) == DUPERR)
				return (DUPERR);
			j += 3;
		}
		i += 3;
	}
	return (NOERR);
}
