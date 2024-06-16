/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:28:36 by lpierre-          #+#    #+#             */
/*   Updated: 2024/05/31 20:28:38 by lpierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	is_inset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*copy;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = 0;
	while (is_inset(set, s1[start]) && s1[start] != 0)
		start++;
	end = ft_strlen(s1) - 1;
	while (is_inset(set, s1[end]) && end > start)
		end--;
	copy = malloc(sizeof(char) * (end - start + 2));
	if (!copy)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		copy[i] = s1[start + i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}
