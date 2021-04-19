/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:08:27 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/14 13:13:38 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	start;

	start = *s;
	while (*s)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	while (*s != start)
	{
		if ((char)c == *s)
			return ((char *)s);
		s--;
	}
	if ((char)c == *s)
		return ((char *)s);
	else
		return (NULL);
}
