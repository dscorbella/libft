/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davsanch <davsanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:27:25 by davsanch          #+#    #+#             */
/*   Updated: 2022/02/01 20:54:58 by davsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned long	i;
	unsigned char	*tmpstr1;
	unsigned char	*tmpstr2;

	i = 0;
	tmpstr1 = (unsigned char *)str1;
	tmpstr2 = (unsigned char *)str2;
	while (i < n)
	{
		if (tmpstr1[i] == tmpstr2[i])
			i++;
		else
			return (tmpstr1[i] - tmpstr2[i]);
	}
	return (0);
}
