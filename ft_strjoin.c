/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:46:03 by hbouchel          #+#    #+#             */
/*   Updated: 2023/10/23 20:46:14 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	total_len;
	size_t	i;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (*s1)
	{
		dest[i++] = *s1++;
	}
	while (*s2)
	{
		dest[i++] = *s2++;
	}
	dest[i] = '\0';
	return (dest);
}
