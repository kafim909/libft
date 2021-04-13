/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:26:05 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/12 13:37:51 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	i;
	size_t	res;

	if (!dst || !src)
		return (0);
	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = 0;
	res = 0;
	if (dstsize == 0)
		return (lensrc);
	if (dstsize > lendest)
		res = lensrc + lendest;
	else
		res = lensrc + dstsize;
	while (dstsize > (lendest + 1) && src[i])
	{
		dst[lendest] = src[i];
		i++;
		lendest++;
	}
	dst[lendest] = '\0';
	return (res);
}
