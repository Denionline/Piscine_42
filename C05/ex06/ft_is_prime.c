/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:42:09 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/07 23:24:35 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;
	int	i;

	prime = 0;
	i = 1;
	while (i <= nb)
	{
		if ((nb % i) == 0)
			prime++;
		i++;
	}
	if (prime < 3)
		return (1);
	return (0);
}
/*
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	nb = atoi(argv[1]);
	if (argc > 0)
		printf("%d", ft_is_prime(nb));
	return (0);
}
*/