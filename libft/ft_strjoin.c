/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 14:38:35 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/21 19:24:51 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tot;
	size_t	i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	tot = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * tot + 1);
	if (!str)
		return (NULL);
	while (*s1)
		str[i++] = (*(char *)s1++);
	while (*s2)
		str[i++] = (*(char *)s2++);
	str[i] = '\0';
	return (str);
}
