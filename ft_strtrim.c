/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 08:32:59 by fbasso            #+#    #+#             */
/*   Updated: 2021/01/14 08:33:01 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_in_set(char const *str, char c)
{
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_index_count(char	const *set, char const *s1, int index)
{
	if (index == 0)
		while (ft_is_in_set(set, s1[index]))
			index++;
	else
		while (ft_is_in_set(set, s1[index]) && index > 0)
			index--;
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		r;
	char	*ptr;

	if (!s1)
		return (0);
	i = ft_index_count(set, s1, 0);
	r = 0;
	j = ft_index_count(set, s1, ft_strlen(s1) - 1);
	if (j <= i)
	{
		if (!(ptr = (char *)malloc(1 * sizeof(char))))
			return (0);
		return (ptr);
	}
	if (!(ptr = (char *)malloc((j - i + 2) * sizeof(char))))
		return (0);
	while (r < j - i + 1)
	{
		ptr[r] = s1[i + r];
		r++;
	}
	ptr[r] = '\0';
	return (ptr);
}
