/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 13:07:57 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/11 14:19:56 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "slib.h"

t_err		ft_to_sudoku(int argc, char **argv)
{
	char *p_str;

	if (--argc != 9)
		return (ARGCERR);
	while (argc--)
	{
		p_str = *argv++;
		if (ft_strlen(p_str) != 9)
			return (WORDERR);
		while (*p_str)
		{
			if (!IS_CELL(*p_str))
				return (CHARERR);
			else if (*p_str == '.')
				*p_str = 0;
			else
				*p_str -= '0';
			++p_str;
		}
	}
	return (NOERR);
}
