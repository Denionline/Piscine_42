/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:49:01 by dximenes          #+#    #+#             */
/*   Updated: 2025/02/27 20:42:59 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}

#include <stdio.h>

int	main(void)
{
	int	array[] = {1,2,3,4,5};
	int	size = sizeof(array) / sizeof(array[0]);
 
	ft_rev_int_tab(array, size);
	
	int	i;

	i = 0;
	while(i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}