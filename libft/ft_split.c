/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:43:05 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/21 19:22:46 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (s[i] != c)
		count++;
	while (s[i])
	{
		while (s[i] == c && s[i])
		{
			if (s[i + 1] != c && s[i + 1])
				count++;
			i++;
		}
		if (s[i])
			i++;
	}
	return (count + 1);
}

static char	*customdup(const char *s1, size_t start, size_t end)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

static char	**freetab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**filltab(char **str, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			k = i;
			while (s[i] != c && s[i])
				i++;
			str[j] = customdup(s, k, i);
			if (str[j] == NULL)
				return (freetab(str));
			j++;
		}
		if (s[i])
			i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (ft_count(s, c)));
	if (!str)
		return (NULL);
	return (filltab(str, s, c));
}
