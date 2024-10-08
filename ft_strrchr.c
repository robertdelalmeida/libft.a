/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:09:20 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/08 18:15:50 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	n;
	int		i;

	i = 0;
	n = '\0';
	while (s[i] != '\0')
	{
		if (s[i] == c)
			n = s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	else
		return (NULL);
}
