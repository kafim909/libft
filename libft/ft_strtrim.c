/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:36:05 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/20 12:14:54 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comp(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*error(void)
{
	char	*str;
	size_t	k;

	k = 0;
	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	str[k] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1) - 1;
	while (comp(s1[i], set) && s1[i])
		i++;
	if (!s1[i])
		return (error());
	while (comp(s1[j], set))
		j--;
	str = ft_substr(s1, i, j - i + 1);
	if (!str)
		return (NULL);
	return (str);
}
