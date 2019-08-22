/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:27:03 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/13 16:46:19 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libop.h"

void	ft_parse_input(char **argv)
{
	void	(*ft_op[5])(int, int);
	int		a;
	int		b;

	a = ft_atoi(argv[0]);
	b = ft_atoi(argv[2]);
	ft_op[0] = ft_add;
	ft_op[1] = ft_sub;
	ft_op[2] = ft_mul;
	ft_op[3] = ft_div;
	ft_op[4] = ft_mod;
	if (!ft_strcmp(argv[1], "+"))
		ft_op[0](a, b);
	else if (!ft_strcmp(argv[1], "-"))
		ft_op[1](a, b);
	else if (!ft_strcmp(argv[1], "*"))
		ft_op[2](a, b);
	else if (!ft_strcmp(argv[1], "/"))
		ft_op[3](a, b);
	else if (!ft_strcmp(argv[1], "%"))
		ft_op[4](a, b);
	else
		ft_putnbr(0);
}

int		main(int argc, char **argv)
{
	++argv;
	if (--argc == 3)
		ft_parse_input(argv);
	return (0);
}
