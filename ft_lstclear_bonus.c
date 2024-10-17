/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:50:34 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/17 16:01:53 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nav;
	t_list	*tmp;

	nav = *lst;
	while (nav != NULL)
	{
		del((*nav).content);
		tmp = (*nav).next;
		free(nav);
		nav = tmp;
	}
	*lst = NULL;
}
