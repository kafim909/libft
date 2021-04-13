/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 11:10:06 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/03 11:57:17 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (src < dst)
	{
		while (len > 0)
		{
			(((char *)dst)[len - 1]) = (((char *)src)[len - 1]);
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			(((char *)dst)[i]) = (((char *)src)[i]);
			i++;
		}
	}
	return (dst);
}
