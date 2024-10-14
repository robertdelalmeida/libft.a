/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:24:59 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/14 17:55:40 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**ptr_matrix;
	int		keep;
	int		len;
	int		j;

	len = ft_count(s, c);
	ptr_matrix = (char **)malloc((len + 1) * sizeof(char));
	len = 0;
	keep = 0;
	while (s[len] != '\0')
	{
		if (s[len] == c)
		{
			ptr_matrix[j] = ft_alloc(s, keep, len);
			keep = len + 1;
			j++;
		}
		len++;
	}
	return (ptr_matrix);
}

char	*ft_alloc(char const *s, int keep, int len)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc((len - keep + 1) * sizeof(char));
	i = 0;
	while (keep < len)
	{
		ptr[i] = s[keep];
		keep++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	ft_count(char const *s, char c)
{
	int	count;
	int	i;

	while (s[i] != '\0')
	{
		if (s[i] == c && i != 0 && (i + 1) != '\0' && (i - 1) != c)
			count++;
		i++;
	}
	return (count);
}
