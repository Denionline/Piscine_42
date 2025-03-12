/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 09:01:43 by dximenes          #+#    #+#             */
/*   Updated: 2025/03/10 14:19:02 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	is_invalid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	if (base[i] == '\0')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	result;
	int	base_found;
	long int	nbr_long;

	nbr_long = nbr;
	if (is_invalid_base(base))
		return ;
	base_found = str_len(base);
	if (nbr_long >= base_found)
		ft_putnbr_base((nbr_long / base_found), base);
	result = nbr_long % base_found;
	write(1, &base[result], 1);
	return ;
}


#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	nbr = 42;
	char	*base = "01";
	
	if (argc > 0)
		ft_putnbr_base(nbr, base);
	return (0);
}
