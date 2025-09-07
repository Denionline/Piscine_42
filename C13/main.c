/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 12:53:57 by dximenes          #+#    #+#             */
/*   Updated: 2025/09/07 14:42:16 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

static void	print(void *item)
{
	if (item)
		puts(item);
	else
		puts("(null)");

}

static int	compare(void *item1, void *item2)
{
	return (strcmp(item1, item2));
}

int	main(void)
{
	t_btree	*tree = btree_create_node("Item 0");
	
	btree_insert_data(&tree, "Item 1", compare);
	btree_insert_data(&tree, "Item 2", compare);
	btree_insert_data(&tree, "Item 3", compare);
	print("Itens: \n");
	btree_apply_prefix(tree, print);
	print(" ");
	print(btree_search_item(tree, "Item 4", compare));
}
