/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:20:03 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/15 19:12:53 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, \
		int (*cmpf)(void *, void *))
{
	if (root)
	{
		if (cmpf(data_ref, root->item) < 0)
			return (btree_search_item(root->left, data_ref, cmpf));
		if (!cmpf(data_ref, root->item))
			return (root->item);
		return (btree_search_item(root->right, data_ref, cmpf));
	}
	return (0);
}
