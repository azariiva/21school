/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:56:33 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/15 21:37:37 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <errno.h>

void	display(char **files, int count)
{
	int		file;
	char	buffer[BUF_SIZE];
	int		i;
	ssize_t	len;

	i = 0;
	while (++i < count)
	{
		if ((file = open(files[i], O_RDWR)) < 0)
		{
			ft_putstr(STDERR, "cat: ");
			ft_putstr(STDERR, files[i]);
			if (errno == EISDIR)
				ft_putstr(STDERR, ": Is a directory\n");
			else
				ft_putstr(STDERR, ": No such file or directory\n");
			continue ;
		}
		while ((len = read(file, &buffer, BUF_SIZE)))
		{
			buffer[len] = 0;
			ft_putstr(STDOUT, buffer);
		}
		close(file);
	}
}

int		main(int argc, char **argv)
{
	char c;

	if (argc == 1)
		while (read(STDIN_FILENO, &c, 1) > 0)
			ft_putchar(STDOUT, c);
	else
		display(argv, argc);
	return (0);
}
