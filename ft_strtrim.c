/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:50:31 by hbouchel          #+#    #+#             */
/*   Updated: 2023/10/25 19:56:10 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	is_a_sep(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*dest;
	size_t	i;

	if (!s1)
		return (NULL);
	size = 0;
	while (is_a_sep(set, *s1))
		s1++;
	while (*s1++)
		size++;
	while (size > 0 && is_a_sep(set, *(s1 - 2)))
	{
		size--;
		s1--;
	}
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < (size))
		dest[i++] = *(s1++ - (size + 1));
	dest[i] = 0;
	return (dest);
}
