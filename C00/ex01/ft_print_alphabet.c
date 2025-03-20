/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denionline <denionline@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:48:44 by denionline        #+#    #+#             */
/*   Updated: 2025/03/18 16:50:36 by denionline       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	az;

	az = 'a';
	while (az <= 'z')
	{
		write(1, &az, 1);
		az++;
	}
}