/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:56:42 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/06 10:57:54 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

char	**ft_sort(int argc, char **argv)
{
	char	*temp;
	int		actual;
	int		next;

	actual = 1;
	while (actual < argc)
	{
		next = actual + 1;
		while (next < argc)
		{
			if (ft_strcmp(argv[actual], argv[next]) > 0)
			{
				temp = argv[actual];
				argv[actual] = argv[next];
				argv[next] = temp;
			}
			next++;
		}
		actual++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	char	**sorted_arg;
	int		i;
	int		arg;

	sorted_arg = ft_sort(argc, argv);
	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (sorted_arg[arg][i])
		{
			write(1, &sorted_arg[arg][i], 1);
			i++;
		}
		write(1, "\n", 1);
		arg++;
	}
}
