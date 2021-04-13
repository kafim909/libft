/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:02:04 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/12 10:10:50 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;
	t_list	*nextpos;

	if (lst && *lst)
	{
		pos = *lst;
		while (pos)
		{
			nextpos = pos->next;
			ft_lstdelone(pos, del);
			pos = nextpos;
		}
	}
	*lst = NULL;
}
