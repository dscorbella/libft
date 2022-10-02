/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davsanch <davsanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:12:09 by davsanch          #+#    #+#             */
/*   Updated: 2022/02/03 18:48:41 by davsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (n > 0)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		else
		{
			i++;
			n--;
		}
	}
	return (0);
}
