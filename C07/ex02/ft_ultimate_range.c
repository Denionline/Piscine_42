/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:39:49 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/11 20:00:54 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = ((void *)0);
		return (0);
	}
	size = (max - min);
	(*range) = malloc(size * 4);
	if ((*range) == 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

/*
#include <stdio.h>
int	main(void)
{
	int	min = -5;
	int	max = 5;
	int	*array;
	int	size = ft_ultimate_range(&array, min, max);

	int	i = 0;
	while (i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
	free(array);
	return (0);
}
*/