/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davsanch <davsanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:23:45 by davsanch          #+#    #+#             */
/*   Updated: 2022/02/15 17:15:13 by davsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t static	ft_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	size_t	j;
	int		k;

	i = 0;
	j = 0;
	array = (char **)ft_calloc((ft_count(s, c) + 1), sizeof(char *));
	if (!array)
		return (0);
	while (s[i] && j < ft_count(s, c))
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			k = 1;
			while (s[i + k] != c && s[i + k])
				k++;
			array[j] = ft_substr(s, i, k);
			j++;
		}
		i++;
	}
	return (array);
}

size_t static	ft_count(char const *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}
