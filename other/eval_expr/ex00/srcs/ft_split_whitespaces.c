/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 21:29:03 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 21:29:07 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_split_whitespaces.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	cur;

	cur = 0;
	while (src[cur] != '\0')
	{
		dest[cur] = src[cur];
		cur++;
	}
	dest[cur] = '\0';
	return (dest);
}

void	copy(int *cur, int *count_buffer, char *buffer, char *str)
{
	if (str[*cur] == ')')
	{
		*(buffer + *count_buffer) = *(str + *cur);
		(*cur)++;
		(*count_buffer)++;
	}
	else
	{
		while (str[*cur] != ' ' && str[*cur] != '\t' &&
				str[*cur] != '\n' && str[*cur] != '\0' && str[*cur] != ')')
		{
			*(buffer + *count_buffer) = *(str + *cur);
			(*cur)++;
			(*count_buffer)++;
			if (str[*cur - 1] == '(')
				break ;
		}
	}
}

void	zeroing(int *cur, int *count_matrix)
{
	*count_matrix = 0;
	*cur = 0;
}

char	**ft_split_whitespaces(char *str)
{
	int		count_matrix;
	int		cur;
	int		count_buffer;
	char	buffer[256];
	char	**matrix;

	zeroing(&cur, &count_matrix);
	matrix = (char**)malloc(256 * sizeof(char*));
	while (str[cur] != '\0')
	{
		count_buffer = 0;
		matrix[count_matrix] = (char*)malloc(256 * sizeof(char));
		copy(&cur, &count_buffer, buffer, str);
		buffer[count_buffer] = '\0';
		if (buffer[0] != '\0')
		{
			matrix[count_matrix] = ft_strcpy(matrix[count_matrix], buffer);
			count_matrix++;
		}
		if (str[cur] == '\0' || str[cur] == ')' || str[cur - 1] == '(')
			cur--;
		cur++;
	}
	matrix[count_matrix] = NULL;
	return (matrix);
}
