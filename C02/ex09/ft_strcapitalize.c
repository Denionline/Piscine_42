/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:02:40 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/02 19:05:09 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_char_special(char prev)
{
	int	result;

	result = 1;
	if (prev >= 'a' && prev <= 'z')
		result = 0;
	if (prev >= 'A' && prev <= 'Z')
		result = 0;
	if (prev >= '0' && prev <= '9')
		result = 0;
	return (result == 1);
}

int	ft_is_alpha_or_number(char prev)
{
	int	result;

	result = 0;
	if (prev >= 'a' && prev <= 'z')
		result = 1;
	if (prev >= 'A' && prev <= 'Z')
		result = 1;
	if (prev >= '0' && prev <= '9')
		result = 1;
	return (result == 1);
}

void	ft_pos_is_not_first(char *str, int i)
{
	int	prev;

	prev = i - 1;
	if (ft_is_char_special(str[prev]))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if (ft_is_alpha_or_number(str[prev]))
			str[i] += 32;
	}
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			i++;
		}
		ft_pos_is_not_first(str, i);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	string[] = "oi, tudo bem? 42Palavras quarenta-e-duas+e+um";
	printf("%s", ft_strcapitalize(string));
	return (0);
}
*/