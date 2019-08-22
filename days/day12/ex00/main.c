/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:56:33 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/15 18:08:06 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	int		f;
	int		fs;
	char	buf[BUF_SIZE];

	if (argc == 1)
		ft_putstr(STDERR, "File name missing.\n");
	else if (argc != 2)
		ft_putstr(STDERR, "Too many arguments.\n");
	else
	{
		f = open(argv[1], O_RDONLY);
		while ((fs = read(f, buf, BUF_SIZE)))
		{
			buf[fs] = 0;
			ft_putstr(STDOUT, buf);
		}
	}
	return (0);
}
