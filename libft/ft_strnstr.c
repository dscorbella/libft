/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davsanch <davsanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:37:23 by davsanch          #+#    #+#             */
/*   Updated: 2022/02/08 21:19:42 by davsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long int	n;
	unsigned long int	i;

	n = ft_strlen(needle);
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && (i + n) <= len && len > 0)
	{
		if (ft_strncmp(haystack + i, needle, n) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
