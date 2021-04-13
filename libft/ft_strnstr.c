/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:45:15 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/04 13:18:14 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	temp = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && len)
	{
		i = temp;
		j = 0;
		while (s1[i] != s2[j] && s1[i] && i < len)
			i++;
		temp = i + 1;
		while (s2[j] == s1[i] && s1[i] && s2[j] && i < len)
		{
			j++;
			i++;
		}
		if (!s2[j])
			return ((char *)&s1[i - j]);
	}
	return (NULL);
}
