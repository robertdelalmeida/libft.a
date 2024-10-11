/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:08:55 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/11 15:37:15 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptrs;
	size_t	i;

	ptrs = (char *)s;
	i = 0;
	while (ptrs[i] != '\0' && i < n)
	{
		if (ptrs[i] == c)
			return (&ptrs[i]);
		i++;
	}
	return (NULL);
}
