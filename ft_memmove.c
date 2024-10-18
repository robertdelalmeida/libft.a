/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:53:14 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/18 12:15:42 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	if (ptrdest >= ptrsrc && ptrdest < ptrsrc + n)
		while (n-- > 0)
			ptrdest[n] = ptrsrc[n];
	else
	{
		i = 0;
		while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	return (dest);
}
