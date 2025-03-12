/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:46:45 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/12 12:43:19 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i_dest;
	int	i_src;

	i_dest = str_len(dest);
	i_src = 0;
	while (src[i_src])
	{
		dest[i_dest + i_src] = src[i_src];
		i_src++;
	}
	dest[i_dest + i_src] = '\0';
	return ;
}

void	join_strs(int size, char *string, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(string, strs[i]);
		if (i < size - 1)
			ft_strcat(string, sep);
		i++;
	}
	return ;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_strs;
	int		size_sep;
	int		i;
	char	*string;

	if (size < 1)
		return (NULL);
	size_sep = ((str_len(sep)) * (size - 1));
	size_strs = 0;
	i = 0;
	while (i < size)
	{
		size_strs += str_len(strs[i]);
		i++;
	}
	string = malloc((size_strs + size_sep + 1) * sizeof(char));
	if (!string)
		return (NULL);
	string[0] = '\0';
	join_strs(size, string, strs, sep);
	string[size_strs + size_sep] = '\0';
	return (string);
}
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"suco", "de", "laranja"};
	char	*sep = "+-+";
	char	*strsjoin = ft_strjoin(5, strs, sep);
	printf("%s\n", strsjoin);
	free(strsjoin);
	return 0;
}