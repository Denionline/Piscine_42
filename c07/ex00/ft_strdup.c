/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:20:08 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/06 22:46:55 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(i * 1 + 1);
	if (!dest)
		return (0);
	dest = src;
	return dest;
}

int	main(void)
{
	char	*src_ori = "Suco de Maracuja.";
	char	*dest_ori = strdup(src_ori);
	char	*dest_ori = malloc(3);
	printf("Result of the original => %s\n", dest_ori);

	char	*src_my = "Suco de Maracuja.";
	char	*dest_my = ft_strdup(src_my);
	printf("Result of my function => %s\n", dest_my);
}