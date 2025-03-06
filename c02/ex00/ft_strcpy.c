/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:39:13 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/02 19:07:49 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	char	string_to_dest[10];
	char	*string_copy = "teste712";
	for (int i = 1; i < argc; i++)
	{
		string_copy = ft_strcpy(string_to_dest, argv[i]);
		printf("%s\n", string_copy);
	}
	return (0);
}
