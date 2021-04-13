/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:19:10 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/02 13:30:26 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	unsigned long long int	nbr;
	int						minus;

	nbr = 0;
	minus = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		nbr += *str - 48;
		if (ft_isdigit(*(str + 1)))
			nbr *= 10;
		str++;
	}
	if (nbr > 9223372036854775807ull && minus == 1)
		return (-1);
	if (nbr > 9223372036854775807ull && minus == -1)
		return (0);
	return (nbr * minus);
}
