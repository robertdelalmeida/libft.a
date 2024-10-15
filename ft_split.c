/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:24:59 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/15 16:00:37 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c);
static char	**ft_matrix(int len);
static char	*ft_alloc(char const *s, char c, int len);

char	**ft_split(char const *s, char c)
{
	char	**ptr_matrix;
	int		flag;
	int		len;
	int		j;

	len = ft_count(s, c);
	ptr_matrix = ft_matrix(len);
	flag = 1;
	len = 0;
	j = 0;
	while (s[len] != '\0')
	{
		if (s[len] != c && flag == 1)
		{
			ptr_matrix[j] = ft_alloc(s, c, len);
			j++;
			flag = 0;
		}
		if (s[len] == c)
			flag = 1;
		len++;
	}
	return (ptr_matrix);
}

static char	*ft_alloc(char const *s, char c, int len)
{
	char	*ptr;
	int		catch;
	int		i;

	catch = 0;
	catch = len;
	while (s[catch] != c && s[catch] != '\0')
		catch++;
	if (catch == 0)
		return (NULL);
	ptr = (char *)malloc((catch + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (len < catch)
	{
		ptr[i] = s[len];
		len++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static int	ft_count(char const *s, char c)
{
	int	count;
	int	flag;
	int	i;

	i = 0;
	flag = 1;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && flag == 1)
		{
			count++;
			flag = 0;
		}
		if (s[i] != c)
			flag = 1;
		i++;
	}
	if (count == 0)
		return (count + 1);
	return (count);
}

static char	**ft_matrix(int len)
{
	char	**ptr;

	ptr = (char **)malloc((len + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	if (len == 1)
	{
		ptr[0] = NULL;
		return (ptr);
	}
	return (ptr);
}
