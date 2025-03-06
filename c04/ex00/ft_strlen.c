/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:17:06 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/04 12:27:30 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
		printf("The length of the string %s is %d.\n",
		 argv[i], ft_strlen(argv[i]));
	return (0);
}
*/