/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 13:53:54 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/13 10:39:30 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	custom_len(char const *s, size_t start, size_t len)
{
	while (s[start] && start < len)
		start++;
	return (start + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	i = 0;
	str = malloc(sizeof(char) * custom_len(s, (size_t)start, len));
	if (!str)
		return (NULL);
	while (i < len && s[start])
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
