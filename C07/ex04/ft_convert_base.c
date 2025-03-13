/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 20:58:33 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/13 12:26:37 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_convert_base2.c"
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	is_invalid_base(char *base);
int	str_len(char *base);

void	rev_str(char *str, int size, int is_n)
{
	char	temp;
	int		i;

	if (is_n == 1)
		str[0] = '-';
	i = is_n;
	while (i < size)
	{
		temp = str[i];
		str[i] = str[size - 1];
		str[size - 1] = temp;
		size--;
		i++;
	}
}

int	get_result_size(int nbr, int lbase)
{
	int	size;

	size = 1;
	while (nbr >= lbase)
	{
		nbr /= lbase;
		size++;
	}
	return (size);
}

void	put_values_on_array(int c_nbr, char *res, char *base_to, int is_n)
{
	int		i;
	int		lbase_to;
	int		lres;

	lbase_to = str_len(base_to);
	lres = get_result_size(c_nbr, lbase_to) + is_n;
	i = 0;
	while (i < lres)
	{
		if (i == 0 && is_n == 1)
		{
			res[i] = '0';
			i++;
		}
		res[i] = base_to[c_nbr % lbase_to];
		c_nbr /= lbase_to;
		i++;
	}
}

int	is_invalid_bases(char *base_from, char *base_to)
{
	if (is_invalid_base(base_from) || is_invalid_base(base_to))
		return (1);
	if (str_len(base_from) < 2 || str_len(base_to) < 2)
		return (1);
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		lbase_to;
	int		c_nbr;
	int		lres;
	int		is_n;
	char	*res;

	if (is_invalid_bases(base_from, base_to))
		return (NULL);
	is_n = 0;
	c_nbr = ft_atoi_base(nbr, base_from);
	lbase_to = str_len(base_to);
	if (c_nbr < 0)
	{
		c_nbr = -c_nbr;
		is_n = 1;
	}
	lres = get_result_size(c_nbr, lbase_to) + is_n;
	res = malloc((lres + 1 + is_n) * sizeof(char));
	if (!res)
		return (0);
	res[0] = 0;
	put_values_on_array(c_nbr, res, base_to, is_n);
	rev_str(res, lres, is_n);
	res[lres] = '\0';
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	// char	nbr[] = "101010";
	// char	base_from[] = "101110";
	// char	base_to[] = "0123456789";
	// char	*result = ft_convert_base(nbr, base_from, base_to);
	char	nbr[100];
	char	base_from[100];
	char	base_to[100];
	char	*result;

	printf("-------------------------------------\n");
	printf("Convert a number base to another base\n\n");
	printf("Number to conversion in some base: ");
	scanf("%s", nbr);
	printf("Base of number: ");
	scanf("%s", base_from);
	printf("Base to convert: ");
	scanf("%s", base_to);
	result = ft_convert_base(nbr, base_from, base_to);
	printf("Result: %s\n", result);
	free(result);
}
*/