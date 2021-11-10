/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:52:28 by mtournay          #+#    #+#             */
/*   Updated: 2021/11/10 10:15:23 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	customlen(unsigned long long int nbr, char *base)
{
	unsigned long long int	len;
	unsigned long long int	ret;

	ret = 0;
	len = ft_strlen(base);
	while (nbr > 0)
	{
		nbr /= len;
		ret++;
	}
	return (ret);
}

static char	*to_zero(void)
{
	char	*str;

	str = malloc(sizeof(char) * 2);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static void	process(char **str, char *base,
				unsigned long long int nbr, int len_base)
{
	static int	i;

	i = 0;
	len_base = (int)ft_strlen(base);
	if (nbr >= (unsigned long long int)len_base)
		process(str, base, nbr / len_base, len_base);
	(*str)[i++] = base[nbr % len_base];
}

char	*ft_itoa_base(unsigned long long int nbr, char *base)
{
	char	*str;
	int		len;
	int		len_base;

	if (!nbr)
		return (to_zero());
	len = customlen(nbr, base);
	len_base = (int)ft_strlen(base);
	str = malloc(sizeof(char) * (40));
	if (!str)
		return (NULL);
	process(&str, base, nbr, len_base);
	str[len] = '\0';
	return (str);
}
