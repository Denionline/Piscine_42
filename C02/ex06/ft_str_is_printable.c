/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:16:13 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/01 19:36:54 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || 126 < str[i])
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	result;
	for (int i = 1; i < argc; i++)
	{
		result = ft_str_is_printable(argv[i]);
		printf("Result of string '%s' is %d.\n", argv[i], result);
	}
	return (0);
}
*/