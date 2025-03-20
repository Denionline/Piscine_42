/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denionline <denionline@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:28:11 by denionline        #+#    #+#             */
/*   Updated: 2025/03/18 20:52:01 by denionline       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	a;
	int	b;
	
	a = 0;
	while (a <= n)
	{
		b = a + 1;
		while (b < (9 - a))
		{
			ft_putchar(a + '0');
			ft_putchar(b + '0');
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		a++;
	}
}
