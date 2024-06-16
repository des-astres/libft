/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 21:55:29 by lpierre-          #+#    #+#             */
/*   Updated: 2024/05/31 21:55:35 by lpierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_digits(unsigned int nbr)
{
	int	i;

	i = 1;
	while (nbr / 10 > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

static void	fill_str(long nbr, char *str, int index)
{
	if (nbr / 10 == 0)
		str[index] = nbr + 48;
	else
	{
		fill_str(nbr / 10, str, index - 1);
		str[index] = nbr % 10 + 48;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	int				sign;
	int				len;
	unsigned int	nbr;

	sign = 0;
	if (n < 0)
	{
		nbr = -n;
		sign = 1;
	}
	else
		nbr = n;
	len = count_digits(nbr) + sign;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	str[len] = 0;
	fill_str(nbr, str, len - 1);
	return (str);
}
