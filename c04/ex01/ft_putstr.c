/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:39:21 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/02 13:43:35 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
		ft_putstr(argv[i]);
	return (0);
}
*/