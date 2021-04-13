/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:02:04 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/13 10:40:52 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	n_len(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	if (i == 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = n_len(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	str[i--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n)
	{
		str[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (str);
}
