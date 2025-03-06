/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 20:50:36 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/04 12:13:13 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				d;
	unsigned int	s;

	d = 0;
	while (dest[d])
		d++;
	s = 0;
	while (src[s] && s < nb)
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
	printf("%s\n", ft_strncat(destiny, "Laranja", 4));
	return (0);
}
*/