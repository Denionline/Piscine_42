/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:19:56 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/06 14:42:45 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	printf("\n%d", argc);
}
*/