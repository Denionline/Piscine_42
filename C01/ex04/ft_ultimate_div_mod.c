/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:35:50 by dximenes          #+#    #+#             */
/*   Updated: 2025/02/24 11:41:15 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a % *b;
	*a = *a / *b;
	*b = x;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("\n%d", b);
	return (0);
}*/
