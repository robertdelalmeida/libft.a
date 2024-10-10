/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:55:04 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/10 17:24:40 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptrim;
	int		i;
	int		j;

	ptrim = (char *)malloc((ft_strlen(s1) - ft_strlen(set) + 1) * sizeof(char));
	i = 0;
	while (s1 != '\0')
	{
		j = 0;
		while (set[j] != '\0' && s1[i] != set[j])
		{
			ptrim[i] = s1[i];
			j++;
		}
		i++;
	}
	return (ptrim);
}
