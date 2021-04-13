/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 09:27:10 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/03 09:39:32 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	c;
	int		i;

	c = '\0';
	i = 0;
	while (n > 0)
	{
		((char *)s)[i] = c;
		i++;
		n--;
	}
}
