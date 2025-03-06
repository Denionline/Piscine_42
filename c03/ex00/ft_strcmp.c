/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:03:07 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/04 09:33:18 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	int	myResult = ft_strcmp(argv[1], argv[2]);	
	int	strcmpResult = strcmp(argv[1], argv[2]);
	printf("The result of strcmp is %d\n", strcmpResult);
	printf("The result of my function is %d\n", myResult);
	printf("Parameters %d\n", argc);
	return (0);
}
*/