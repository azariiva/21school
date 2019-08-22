/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:27:03 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/13 19:07:56 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_opp.h"
#include "libop.h"

void	ft_usage(int a, int b)
{
	t_opp	*ptr;
	int		n;

	ptr = g_opptab;
	ft_putstr("error : only [ ");
	n = a + b;
	while (*(ptr->code) != 0)
	{
		ft_putstr(ptr->code);
		ft_putchar(' ');
		++ptr;
	}
	ft_putstr("] are accepted.\n");
}

void	(*ft_parse_input(char *opcode))(int, int)
{
	int		i;

	i = 0;
	while (*((g_opptab + i)->code))
	{
		if (ft_strcmp((g_opptab + i)->code, opcode) == 0)
			return ((g_opptab + i)->f);
		++i;
	}
	return ((g_opptab + i)->f);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	++argv;
	a = ft_atoi(argv[0]);
	b = ft_atoi(argv[2]);
	if (--argc == 3)
		ft_parse_input(argv[1])(a, b);
	return (0);
}
