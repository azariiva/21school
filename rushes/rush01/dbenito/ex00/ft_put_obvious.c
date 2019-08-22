/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_obvious.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbenito <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 13:44:04 by dbenito           #+#    #+#             */
/*   Updated: 2019/08/11 20:10:53 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_count_dot(char *str_variant);
void		ft_refil_variant(char *str_variant);

void		ft_rewrite_argv(int *i, int *j, char **ptr, char *str_variant)
{
	int cnt;

	cnt = 0;
	while (cnt < 9)
	{
		if (str_variant[cnt] != 0)
		{
			ptr[*i][*j] = str_variant[cnt];
			*i = 0;
			*j = 0;
			ft_refil_variant(str_variant);
			return ;
		}
		cnt++;
	}
}

void		ft_check_row(int *i, int *j, char **ptr, char *str_variant)
{
	int		k;
	int		cnt;

	cnt = 0;
	while (cnt < 9)
	{
		k = 0;
		while (k < 9)
		{
			if (str_variant[cnt] == ptr[*i][k])
				str_variant[cnt] = 0;
			k++;
		}
		cnt++;
	}
	if (ft_count_dot(str_variant) == 8)
		ft_rewrite_argv(i, j, ptr, str_variant);
}

void		ft_check_col(int *i, int *j, char **ptr, char *str_variant)
{
	int k;
	int cnt;

	cnt = 0;
	while (cnt < 9)
	{
		k = 0;
		while (k < 9)
		{
			if (str_variant[cnt] == ptr[k][*j])
				str_variant[cnt] = 0;
			k++;
		}
		cnt++;
	}
	if (ft_count_dot(str_variant) == 8)
		ft_rewrite_argv(i, j, ptr, str_variant);
}

void		ft_check_box(int *i, int *j, char **ptr, char *str_variant)
{
	int box_row;
	int box_col;
	int row;
	int col;
	int cnt;

	cnt = 0;
	box_row = *i - (*i) % 3;
	box_col = *j - *j % 3;
	while (cnt < 9)
	{
		row = 0;
		while (row < 3)
		{
			col = 0;
			while (col < 3)
				if (str_variant[cnt] == ptr[row + box_row][col++ + box_col])
					str_variant[cnt] = 0;
			row++;
		}
		cnt++;
	}
	if (ft_count_dot(str_variant) == 8)
		ft_rewrite_argv(i, j, ptr, str_variant);
}

void		ft_put_obvious(char **ptr)
{
	int		i;
	int		j;
	char	str_variant[9];

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (ptr[i][j] == 0)
			{
				ft_refil_variant(str_variant);
				ft_check_row(&i, &j, ptr, str_variant);
				ft_check_col(&i, &j, ptr, str_variant);
				ft_check_box(&i, &j, ptr, str_variant);
			}
			j++;
		}
		i++;
	}
}
