/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_crutch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 19:59:38 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/11 20:56:15 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vlib.h"

char		*ft_make_body(char *marks, int *size);
void		ft_column(char **sudoku, int index, char *marks);
void		ft_line(char *line, char *marks);
void		ft_sector(char **sudoku, int x, int y, char *marks);

void		ft_crutch(char **sudoku, t_var *p_varr)
{
	char	marks[10];
	int		i;
	int		j;

	ft_fill_zero(marks, 10);
	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
			if (!sudoku[i][j])
			{
				ft_line(sudoku[i], marks);
				ft_column(sudoku, j, marks);
				ft_sector(sudoku, i, j, marks);
				p_varr->body = ft_make_body(marks, &(p_varr->size));
				p_varr->p_cell = sudoku[i] + j;
				p_varr->iter = 0;
				++p_varr;
				ft_fill_zero(marks, 10);
			}
	}
	p_varr->body = 0;
}
