/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 20:58:33 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/11 20:36:02 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	put_values_on_array(int c_nbr, char *res, int lres, char *base_to)
{
	int		i;
	int		lbase_to;

	lbase_to = str_len(base_to);
	i = 0;
	while (i < lres)
	{
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
	put_values_on_array(c_nbr, res, lres, base_to);
	rev_str(res, lres, is_n);
	res[lres] = '\0';
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
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