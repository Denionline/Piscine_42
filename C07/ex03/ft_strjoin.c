/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:46:45 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/12 14:24:47 by dximenes         ###   ########.fr       */
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

void	join_strs(int size, char *str, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return ;
}

char	*is_null(char *str)
{
	*str = 0;
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lstrs;
	int		lsep;
	int		i;
	char	*str;

	if (size < 1)
		return (is_null(str = malloc(sizeof(char))));
	lsep = ((str_len(sep)) * (size - 1));
	lstrs = 0;
	i = 0;
	while (i < size)
	{
		lstrs += str_len(strs[i]);
		i++;
	}
	str = malloc((lstrs + lsep + 1) * sizeof(char));
	if (!str)
		return (str);
	*str = 0;
	join_strs(size, str, strs, sep);
	str[lstrs + lsep] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"suco", "de", "laranja"};
	char	*sep = "+-+";
	char	*strsjoin = ft_strjoin(0, strs, sep);
	printf("%s\n", strsjoin);
	free(strsjoin);
	return 0;
}
*/