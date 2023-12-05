/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:46:00 by hbouchel          #+#    #+#             */
/*   Updated: 2023/10/23 20:12:11 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;
	char	*a;

	a = (char *)big;
	little_len = 0;
	while (little[little_len])
		little_len++;
	if (little_len == 0)
		return (a);
	i = 0;
	while (a[i] && i < len)
	{
		j = 0;
		while (a[i + j] && little[j] && a[i + j] == little[j] && i + j < len)
			j++;
		if (j == little_len)
		{
			return (a + i);
		}
		i++;
	}
	return (NULL);
}
