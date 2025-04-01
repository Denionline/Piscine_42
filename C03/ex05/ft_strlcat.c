/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 11:26:06 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/04 12:11:56 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	while (dest[d])
		d++;
	s = 0;
	while (src[s])
		s++;
	if (d > size)
		return (s + size);
	s = 0;
	while (src[s] && s < size)
	{
		dest[d + s] = src[s];
		s++;
	}
	dest[d + s] = '\0';
	return (d + s);
}
/*
#include <stdio.h>
#include <bsd/string.h> // Compile with => cc -lbsd ft_strlcat.c

int	main(void)
{
	unsigned int	size = 2;

	char	src_my[] = "Uva";
	char	dest_my[] = "Suco de ";
	char	src_ori[] = "Uva";
	char	dest_ori[] = "Suco de ";
	unsigned int	result;
	unsigned int	result_ori;
	result = ft_strlcat(dest_my, src_my, size);
	result_ori = strlcat(dest_ori, src_ori, size);
	printf("src_my My function => %s\n", src_my);
	printf("dest_my My function => %s\n", dest_my);
	printf("My function => %d\n\n", result);
	printf("src_ori Original => %s\n", src_ori);
	printf("dest_ori Original => %s\n", dest_ori);
	printf("Original => %d\n", result_ori);
	return (0);
}
*/