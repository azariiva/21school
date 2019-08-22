/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variants.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 14:29:33 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/11 20:50:50 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vlib.h"

void		ft_crutch(char **sudoku, t_var *varr);

char		*ft_make_body(char *marks, int *size)
{
	int		i;
	char	*body;
	char	*p_body;

	*size = 0;
	i = 1;
	while (i < 10)
		if (!marks[i++])
			++(*size);
	body = (char *)malloc(*size * sizeof(char));
	p_body = body;
	i = 1;
	while (i < 10)
	{
		if (!marks[i])
			*p_body++ = i;
		++i;
	}
	return (body);
}

void		ft_column(char **sudoku, int index, char *marks)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		marks[(int)sudoku[i][index]] = 1;
		++i;
	}
}

void		ft_line(char *line, char *marks)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		marks[(int)line[i]] = 1;
		++i;
	}
}

void		ft_sector(char **sudoku, int x, int y, char *marks)
{
	int		i;
	int		j;

	i = (x / 3) * 3;
	while (i < (x / 3 + 1) * 3)
	{
		j = (y / 3) * 3;
		while (j < (y / 3 + 1) * 3)
		{
			marks[(int)sudoku[i][j]] = 1;
			++j;
		}
		++i;
	}
}

t_var		*ft_make_varr(char **sudoku)
{
	t_var	*varr;

	varr = (t_var *)malloc((ft_cnt_empty(sudoku) + 1) * sizeof(t_var));
	ft_crutch(sudoku, varr);
	return (varr);
}
