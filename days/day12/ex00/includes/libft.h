/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 21:29:05 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/15 18:07:01 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>

# define BUF_SIZE 4096
# define STDIN 0
# define STDOUT 1
# define STDERR 2

void	ft_putchar(int stream, char c);
void	ft_putstr(int stream, char *c);

#endif
