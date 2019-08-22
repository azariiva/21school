/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:30:22 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 21:30:25 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPLIT_WHITESPACES_H
# define FT_SPLIT_WHITESPACES_H

# include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);
void	copy(int *cur, int *count_buffer, char *buffer, char *str);
void	zeroing(int *cur, int *count_matrix);
char	**ft_split_whitespaces(char *str);

#endif
