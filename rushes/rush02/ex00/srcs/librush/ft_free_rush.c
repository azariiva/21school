/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_rush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 17:44:42 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/18 23:16:42 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

/*
 ** This function free all allocated for rush memory.
*/

void			ft_free_rush(t_rush *rush)
{
	free(rush->first);
	free(rush->middle);
	free(rush->last);
	free(rush);
}
