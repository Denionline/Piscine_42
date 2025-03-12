/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:09:34 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/12 12:45:37 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = (max - min);
	array = malloc(size * sizeof(int));
	if (!array)
		return (0);
	i = 0;
	while (i < size)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*
#include <stdio.h>
int	main(void)
{
	int	min = 0;
	int	max = 10;
	int	*array = ft_range(min, max);
	int	size = (max - min);

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