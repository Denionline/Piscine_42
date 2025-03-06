/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 21:50:40 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/01 19:35:21 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (dest);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	char	string_to_dest[100];
	char	*result;
	int		size = atoi(argv[argc-1]);
	for (int i = 1; i < argc-1; i++)
	{
		result = ft_strncpy(string_to_dest, argv[i], size);
		printf("%s\n", result);
	}
	return (0);
}
*/