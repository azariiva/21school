/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:15:11 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 20:22:53 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int	free_map(t_map *map)
{
	free(map->prev_line);
	free(map->curr_line);
	return (OK);
}
