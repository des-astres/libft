/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 21:08:18 by lpierre-          #+#    #+#             */
/*   Updated: 2024/05/31 21:08:19 by lpierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_substr(char const *s, char c)
{
	int	i;
	int	substr;

	substr = 0;
	if (s[0] != c && s[0] != 0)
		substr++;
	i = 1;
	while (s[i] != 0)
	{
		if (s[i - 1] == c && s[i] != c)
			substr++;
		i++;
	}
	return (substr);
}

static char	*ft_strndup(char const *s, int n)
{
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * (n + 1));
	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

static void	clear(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static char	**fill_substr(char const *s, char c, char **tab)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		len = 0;
		while (s[i + len] != c && s[i + len] != 0)
			len++;
		if (len != 0)
		{
			tab[j] = ft_strndup(&s[i], len);
			if (!tab[j])
				return (clear(tab), NULL);
			j++;
		}
		i += len;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		tab_len;

	tab_len = count_substr(s, c);
	tab = malloc(sizeof(char const *) * (tab_len + 1));
	if (tab == NULL)
	{
		free(tab);
		return (NULL);
	}
	tab = fill_substr(s, c, tab);
	return (tab);
}
