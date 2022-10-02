/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davsanch <davsanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:46:17 by davsanch          #+#    #+#             */
/*   Updated: 2022/02/02 20:11:36 by davsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned long	i;
	unsigned char	*src2;
	unsigned char	*dst2;

	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	i = 0;
	if (dst == src || !n)
		return (dst);
	if (dst2 > src2)
	{
		while (n > 0)
		{
			dst2[n - 1] = src2[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
