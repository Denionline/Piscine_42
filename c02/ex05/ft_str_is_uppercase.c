/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:12:18 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/05 17:27:43 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	while (*str)
	{
		if (*str < 'A' || 'Z' < *str)
		{
			return (0);
		}
		str++;
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
		result = ft_str_is_uppercase(argv[i]);
		printf("Result of string '%s' is %d.\n", argv[i], result);
	}
	return (0);
}
*/