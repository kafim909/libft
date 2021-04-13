/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:02:04 by mtournay          #+#    #+#             */
/*   Updated: 2021/04/12 11:40:32 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start_list;
	t_list	*pos;
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	start_list = NULL;
	while (temp)
	{
		pos = ft_lstnew(f(temp->content));
		if (!pos)
		{
			ft_lstclear(&start_list, del);
			return (NULL);
		}
		ft_lstadd_back(&start_list, pos);
		temp = temp->next;
	}
	return (start_list);
}
