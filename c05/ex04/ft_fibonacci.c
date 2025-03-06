/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:25:12 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/06 14:29:53 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	int	i = 20;
	printf("Fibonacci of %d is %d.", i, ft_fibonacci(i));
}
*/