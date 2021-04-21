/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 09:49:38 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/21 19:23:20 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = -1;
	while (s[++i])
		if ((char)c == s[i])
			return ((char *)&s[i]);
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}
