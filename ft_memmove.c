/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:53:14 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/10 14:07:15 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptrsrc;
	char	*temp;
	char	*ptrdest;
	size_t	i;

	temp = NULL;
	ptrsrc = (char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = ptrsrc[i];
		i++;
	}
	ptrdest = (char *)dest;
	i = 0;
	while (i < n)
	{
		ptrdest[i] = temp[i];
		i++;
	}
	return (ptrdest);
}
