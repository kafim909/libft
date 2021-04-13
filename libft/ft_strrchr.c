/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:08:27 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/12 11:44:15 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	start;

	start = *s;
	if (!ft_isascii(c))
		return (NULL);
	while (*s != '\0')
		s++;
	if (c == *s)
		return ((char *)s);
	while (*s != start)
	{
		if (c == *s)
			return ((char *)s);
		s--;
	}
	if (c == *s)
		return ((char *)s);
	else
		return (NULL);
}
