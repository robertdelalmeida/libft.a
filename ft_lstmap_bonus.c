/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:02:23 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/18 11:37:45 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	new_node = ft_lstnew(f((*lst).content));
	if (!new_node)
		return (NULL);
	tmp = new_node;
	lst = (*lst).next;
	while (lst != NULL)
	{
		(*tmp).next = ft_lstnew(f((*lst).content));
		if (!tmp->next)
		{
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		tmp = (*tmp).next;
		lst = (*lst).next;
	}
	return (new_node);
}
