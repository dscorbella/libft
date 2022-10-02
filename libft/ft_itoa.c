/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davsanch <davsanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:34:41 by davsanch          #+#    #+#             */
/*   Updated: 2022/02/14 17:06:07 by davsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_lenght(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			lenght;
	int			neg;
	long int	num;

	lenght = ft_lenght(n);
	num = n;
	neg = 0;
	str = malloc (sizeof(char) * (lenght + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		num = -num;
		neg = 1;
	}
	str[lenght] = '\0';
	while (lenght > neg)
	{
		str[lenght - 1] = num % 10 + '0';
		num = num / 10;
		lenght --;
	}
	return (str);
}
