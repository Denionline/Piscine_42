/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:25:12 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/07 23:40:28 by dximenes         ###   ########.fr       */
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
#include <stdlib.h>
int	main(int argc, char **argv)
{
	printf("Fibonacci of %d is %d.", atoi(argv[1]), ft_fibonacci(atoi(argv[1])));
	printf("\n%d", argc);
}
*/