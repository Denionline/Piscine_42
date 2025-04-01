/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 23:25:17 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/07 23:38:43 by dximenes         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (nb)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	nb = atoi(argv[1]);
	if (argc > 0)
		printf("Prime => %d\n", ft_find_next_prime(nb));
	return (0);
}
*/