/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:05:21 by dximenes          #+#    #+#             */
/*   Updated: 2025/02/26 11:29:56 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_verify_current_position(int *tab, int	*min, int	*i);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min])
			{
				min = j;
			}
			j++;
		}
		ft_verify_current_position(tab, &min, &i);
		i++;
	}
}

void	ft_verify_current_position(int	*tab, int	*min, int	*i)
{
	int	temp;

	if (*min != *i)
	{
		temp = tab[*min];
		tab[*min] = tab[*i];
		tab[*i] = temp;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	array[] = {4, 1, 5, 3, 2};
	int	size = sizeof(array) / sizeof(array[0]);
 
	ft_sort_int_tab(array, size);
	
	int	i;

	i = 0;
	while(i < size)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}*/
