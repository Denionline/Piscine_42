/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 21:08:37 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/06 11:02:33 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_new_str(char *str, int initial_position)
{
	int	i;
	int	j;

	i = initial_position;
	j = 0;
	while (str[j])
	{
		if (str[i])
			str[j] = str[i];
		else
			str[j] = '\0';
		j++;
		i++;
	}
	return (str);
}

int	ft_find_initial_position(char *str, char *to_find, int size_find)
{
	int	i;
	int	f;
	int	temp;

	i = 0;
	while (str[i])
	{
		temp = i;
		f = 0;
		while (f < size_find && to_find[f] == str[i])
		{
			i++;
			f++;
			if (f == size_find)
				return (temp);
		}
		i = temp;
		i++;
	}
	return (-1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	result;
	int	size_find;

	size_find = 0;
	while (to_find[size_find])
		size_find++;
	result = 0;
	if (size_find > 0)
		result = ft_find_initial_position(str, to_find, size_find);
	if (result > 0)
	{
		str = ft_new_str(str, result);
	}
	if (result < 0)
		return (0);
	return (str);
}

#include <stdio.h>
#include <string.h>
// int	main(int argc, char** argv)
int	main(void)
{
	char	*argv[] = {"./a.out", "Bom dia! tudo bem?", "dia"};
	int	argc = sizeof(argv) / sizeof(argv[0]);
	if (argc > 1)
	{
		printf("%s\n", ft_strstr(argv[1], argv[2]));
		printf("%s\n", strstr(argv[1], argv[2]));
	}
	return (0);
}
