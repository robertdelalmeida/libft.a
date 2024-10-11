/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:24:59 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/11 13:22:23 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str1;
	char	*str2;
	int		i;

	i = 0;
	str1 = NULL;
	ptr = (char **)malloc(3 * sizeof(char));
	while (s[i] != c && s[i] != '\0')
	{
		str1[i] = s[i];
		i++;
	}
	str1[i] = '\0';
	str2 = (char *)&s[i + 1];
	i = 0;
	while (str2[i] != '\0')
		i++;
	str2[i] = '\0';
	ptr[0] = &str1[0];
	ptr[1] = &str2[0];
	ptr[2] = (void *)0;
	free(ptr);
	return (ptr);
}
