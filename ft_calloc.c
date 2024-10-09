/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:07:52 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/09 15:25:22 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = NULL;
	while (i < (int)(nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)&ptr[0]);
}
