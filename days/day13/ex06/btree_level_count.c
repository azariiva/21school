/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:24:45 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/15 19:30:51 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

#define MAX(a, b) (a > b ? a : b)

int	btree_level_count(t_btree *root)
{
	if (root)
		return (MAX(btree_level_count(root->left), \
				btree_level_count(root->right)) + 1);
	else
		return (0);
}
