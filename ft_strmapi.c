/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:27:49 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/18 19:38:29 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*ptrs;

	j = 0;
	while (s[j] != '\0')
		j++;
	ptrs = (char *)malloc((j + 1) * sizeof(char));
	if (!ptrs)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptrs[i] = f(i, s[i]);
		i++;
	}
	ptrs[i] = '\0';
	return (ptrs);
}
