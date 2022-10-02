/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davsanch <davsanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:55:00 by davsanch          #+#    #+#             */
/*   Updated: 2022/02/09 13:02:59 by davsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start > ft_strlen(s))
	{
		str = (char *)malloc(1);
		if (!str)
			return (0);
		str[0] = '\0';
		return (str);
	}
	else if ((ft_strlen(s) - start) <= len)
	{
		str = (char *)malloc(ft_strlen(s) - start + 1);
		if (!str)
			return (0);
		ft_strlcpy(str, s + start, (ft_strlen(s) - start + 1));
	}
	else
	{
		str = (char *)malloc(len + 1);
		if (!str)
			return (0);
		ft_strlcpy(str, s + start, len + 1);
	}
	return (str);
}
