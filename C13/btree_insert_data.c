/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:26:52 by dximenes          #+#    #+#             */
/*   Updated: 2025/09/07 14:14:22 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if ((*root))
	{
		if (cmpf((*root)->item, item) > 0)
		{
			if (!(*root)->left)
				(*root)->left = btree_create_node(item);
			else
				btree_insert_data(&(*root)->left, item, cmpf);
		}
		else if (cmpf((*root)->item, item) < 0)
		{
			if (!(*root)->right)
				(*root)->right = btree_create_node(item);
			else
				btree_insert_data(&(*root)->right, item, cmpf);
		}
	}
	else
		(*root) = btree_create_node(item);
}
