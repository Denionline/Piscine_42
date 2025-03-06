/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:03:58 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/04 09:33:02 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	array1[] = "Suco de Uva";
	char	array2[] = "Suco de Pera";
	int	size = 9;
	int	myResult = ft_strncmp(array1, array2, size);	
	int	strcmpResult = strncmp(array1, array2, size);
	printf("Original => %d\n", strcmpResult);
	printf("My function => %d\n", myResult);
	return (0);
}
*/