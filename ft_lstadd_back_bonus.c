/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:54:47 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/17 15:55:32 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nav;

	if (!lst || !new)
		return ;
	else if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
	{
		nav = *lst;
		while ((*nav).next != NULL)
			nav = (*nav).next;
		(*nav).next = new;
	}
}
