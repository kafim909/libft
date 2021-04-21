/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:19:10 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/21 13:35:21 by mtournay         ###   ########.fr       */
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

int	ft_atoi(const char *str)
{
	unsigned long long int	nbr;
	int						minus;
	int						i;

	nbr = 0;
	minus = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			minus = -1;
	}
	while (ft_isdigit(str[i]))
	{
		nbr += str[i++] - 48;
		if (ft_isdigit(str[i]))
			nbr *= 10;
	}
	if ((nbr > 9223372036854775807ull && minus > 0) || (minus > 0 && i > 19))
		return (-1);
	else if ((nbr > 9223372036854775808ull && minus < 0) || i > 19)
		return (0);
	return (nbr * minus);
}
