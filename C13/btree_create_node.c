/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:35:50 by denionline        #+#    #+#             */
/*   Updated: 2025/09/06 10:28:31 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree *btree_create_node(void *item)
{
	t_btree	*btree;

	btree = malloc(sizeof(t_btree));
	if (!btree)
		return (NULL);
	btree->right = NULL;
	btree->left = NULL;
	btree->item = item;
	return (btree);
}
