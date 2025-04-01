/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:50:16 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/08 19:07:26 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	while (dest[d])
		d++;
	s = 0;
	while (src[s])
	{
		dest[d + s] = src[s];
		s++;
	}
	dest[d + s] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	destiny[] = "Suco de ";
	printf("%s\n", ft_strcat(destiny, "Uva"));
	return (0);
}
*/