/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:13:50 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/06 14:42:30 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ref;

	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	ref = nb;
	while (power > 1)
	{
		nb *= ref;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int	nb = atoi(argv[1]);
	int	power = atoi(argv[2]);

	printf("%d on power %d is => %d", nb, power, ft_iterative_power(nb, power));
	printf("\n\n\nArguments => %d", argc);
}
*/