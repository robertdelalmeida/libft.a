/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-fra <rdel-fra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:00:38 by rdel-fra          #+#    #+#             */
/*   Updated: 2024/10/09 15:12:36 by rdel-fra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;
	int	flag;
	int	i;

	i = 0;
	num = 0;
	sign = 1;
	flag = 1;
	while (nptr[i] == 32 || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+')
	{
		flag = 0;
		i++;
	}
	if (flag && nptr[i] == '-')
	{
		sign = sign *(-1);
		i++;
	}
	i = i - 1;
	while (++i && nptr[i] >= '0' && nptr[i] <= '9')
		num = num * 10 + (nptr[i] - '0');
	return (num * sign);
}

// int main()
// {
// 	char str[]= "\t\r\n\f\v -1234a97";

// 	printf("ft:%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// }