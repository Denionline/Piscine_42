/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:44:21 by dximenes          #+#    #+#             */
/*   Updated: 2025/02/26 13:17:33 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 9;
	ft_swap(&a, &b);
	printf("a = %d, b = %d", a, b);
	return (0);
}*/
