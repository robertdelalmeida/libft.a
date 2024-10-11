/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:42:27 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/11 19:00:50 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_populate(char *array, int len, unsigned int nb);

char	*ft_itoa(int n)
{
	unsigned int	nb;
	char			*ptr;
	int				len;
	int				sign;

	sign = 1;
	len = 0;
	if (n < 0)
	{
		sign = sign *(-1);
		len++;
	}
	nb = n * sign;
	while (++len && nb != 0)
		nb /= 10;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	nb = n * sign;
	ft_populate(ptr, len, nb);
	if (sign == -1)
		ptr[0] = '-';
	return (ptr);
}

void	ft_populate(char *array, int len, unsigned int nb)
{
	while (--len > -1)
	{
		array[len - 1] = nb % 10 + '0';
		nb = nb / 10;
	}
}

// int	main(void)
// {
// 	int	a;

// 	scanf("%d", &a);
// 	printf("%s\n", ft_itoa(a));
// }
