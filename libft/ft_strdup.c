/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davsanch <davsanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:49:58 by davsanch          #+#    #+#             */
/*   Updated: 2022/02/08 18:50:01 by davsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = malloc(sizeof (char) * (ft_strlen(s1) + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, (ft_strlen(s1) + 1));
	return (str);
}
