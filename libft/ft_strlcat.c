/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davsanch <davsanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:41:43 by davsanch          #+#    #+#             */
/*   Updated: 2022/02/01 19:54:17 by davsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[k])
		k++;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && size > (j + i + 1))
	{
		dst[j + i] = src[j];
		j++;
	}
	dst[j + i] = '\0';
	if (size < i)
		return (k + size);
	else
		return (i + k);
}
