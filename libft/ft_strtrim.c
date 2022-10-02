/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davsanch <davsanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:34:31 by davsanch          #+#    #+#             */
/*   Updated: 2022/02/17 23:51:43 by davsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		lens1;
	size_t		a;
	char		*str;

	a = 0;
	lens1 = ft_strlen(s1);
	while (s1[a] && ft_strchr(set, s1[a]))
		a++;
	while (ft_strrchr(set, s1[lens1]) && lens1)
		lens1--;
	str = ft_substr(s1, a, (lens1 - a + 1));
	return (str);
}
