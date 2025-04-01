/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:34:17 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/01 19:36:26 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || 'z' < str[i])
		{
			return (0);
		}
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
		result = ft_str_is_lowercase(argv[i]);
		printf("Result of string '%s' is %d.\n", argv[i], result);
	}
	return (0);
}*/