/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davsanch <davsanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:12:33 by davsanch          #+#    #+#             */
/*   Updated: 2022/02/07 18:59:02 by davsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*clondst;
	unsigned char	*clonsrc;

	i = 0;
	clondst = (unsigned char *)dst;
	clonsrc = (unsigned char *)src;
	if (dst == src || n == 0)
		return (dst);
	while (i < n)
	{
		clondst[i] = clonsrc[i];
		i++;
	}
	return (dst);
}
