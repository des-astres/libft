/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:10:52 by lpierre-          #+#    #+#             */
/*   Updated: 2024/05/30 12:10:55 by lpierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if (n == 0)
		return (NULL);
	i = 0;
	while (((unsigned char *)s)[i] != (unsigned char)c && i < n - 1)
		i++;
	if (((unsigned char *)s)[i] == (unsigned char)c)
		return ((unsigned char *)&s[i]);
	return (NULL);
}
