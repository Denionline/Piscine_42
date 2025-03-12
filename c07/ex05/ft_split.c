/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:46:11 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/12 10:35:37 by dximenes         ###   ########.fr       */
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

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_w(char *str, char *sep)
{
	int	count;
	int	lstr;
	int	i;

	lstr = str_len(str);
	count = 0;
	i = 0;
	if (!*str)
		return (0);
	while (!is_sep(str[i], sep))
		i++;
	while (i < lstr && str[i + 1] != '\0')
	{
		if (is_sep(str[i], sep) && !is_sep(str[i + 1], sep))
			count++;
		i++;
	}
	if (!is_sep(str[lstr - 1], sep))
		count--;
	return (count);
}

char	*str_dup(char *str, char *sep)
{
	char	*word;
	int		i;
	int		lword;

	lword = 0;
	i = 0;
	if (!*str)
		return (0);
	while (str[i] && !is_sep(str[i], sep))
	{
		lword++;
		i++;
	}
	word = malloc((lword + 1) * sizeof(char));
	if (!word)
		return (NULL);
	word[0] = '\0';
	i = 0;
	while (str[i] && !is_sep(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		larr;
	int		i;

	arr = malloc((larr = count_w(str, charset) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (!is_sep(*str, charset))
		str++;
	i = 0;
	while (*str)
	{
		if (is_sep(*str, charset))
			str++;
		else if (i < larr)
		{
			arr[i] = str_dup(str, charset);
			str += str_len(arr[i]);
			i++;
		}
		else
			str++;
	}
	arr[i] = 0;
	return (arr);
}

#include <stdio.h>
int	main(void)
{
	char	*str = "suco=-=+de++mangae++muito---+-=bom";
	char	*charset = "-=";
	char	**result;
	result = ft_split(str, charset);
	for (int i = 0; result[i] != 0; i++)
		printf("%s\n", result[i]);
	free(result);
}
