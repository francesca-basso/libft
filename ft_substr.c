/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 08:32:19 by fbasso            #+#    #+#             */
/*   Updated: 2021/01/14 08:32:26 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t		i;

	i = 0;
	if (!(ptr = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ptr);
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = 0;
	return (ptr);
}
