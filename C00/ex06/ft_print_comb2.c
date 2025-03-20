/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denionline <denionline@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:13:02 by denionline        #+#    #+#             */
/*   Updated: 2025/03/18 20:10:39 by denionline       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	ft_print(int g1, int g2, int limit)
{
	if (g1 < 10)
		ft_putchar('0');
	ft_putnbr(g1);
	ft_putchar(' ');
	if (g2 < 10)
		ft_putchar('0');
	ft_putnbr(g2);
	if (g1 < (limit - 2) || g2 < (limit - 1))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	group1;
	int	group2;
	int	limit = 100;
	
	group1 = 0;
	while (group1 < (limit - 1))
	{
		group2 = group1 + 1;
		while (group2 < limit)
		{
			ft_print(group1, group2, limit);
			group2++;
		}
		group1++;
	}
}
