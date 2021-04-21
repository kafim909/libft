/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 11:10:06 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/21 19:20:42 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (src == dst)
		return (dst);
	if (src < dst)
		while (len--)
			(((unsigned char *)dst)[len]) = (((unsigned char *)src)[len]);
	else
		while (++i < len)
			(((unsigned char *)dst)[i]) = (((unsigned char *)src)[i]);
	return (dst);
}
