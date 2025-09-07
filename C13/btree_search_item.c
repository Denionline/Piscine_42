/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:15:47 by dximenes          #+#    #+#             */
/*   Updated: 2025/09/07 14:38:34 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	void	*temp;

	temp = NULL;
	if (root->left)
		temp = btree_search_item(root->left, data_ref, cmpf);
	if (!cmpf(root->item, data_ref))
		return (root->item);
	if (root->right)
		temp = btree_search_item(root->right, data_ref, cmpf);
	return (temp);
}