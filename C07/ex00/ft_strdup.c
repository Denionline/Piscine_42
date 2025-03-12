/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:20:08 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/11 20:38:30 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		lsrc;
	char	*dest;

	lsrc = str_len(src);
	dest = malloc((lsrc + 1) * sizeof(char));
	if (!dest)
		return (0);
	dest[0] = '\0';
	i = 0;
	while (i < lsrc)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src_my[] = "Suco de Maracuja.";
	char	*dest_my = ft_strdup(src_my);
	src_my[3] = 'M';
	printf("Result of my src => %s\n", src_my);
	printf("Result of my function => %s\n", dest_my);
	free(dest_my);
}
*/
