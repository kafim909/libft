/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 11:10:06 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/20 11:55:16 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == 0 || src == 0)
		return (0);
	if (src == dst)
		return (dst);
	if (src < dst)
	{
		while (len--)
		{
			(((unsigned char *)dst)[len]) = (((unsigned char *)src)[len]);
		}
	}
	else
	{
		while (i < len)
		{
			(((unsigned char *)dst)[i]) = (((unsigned char *)src)[i]);
			i++;
		}
	}
	return (dst);
}
