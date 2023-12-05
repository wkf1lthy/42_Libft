/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:58:07 by hbouchel          #+#    #+#             */
/*   Updated: 2023/10/23 21:22:46 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	char		*dest;
	const char	*src;
	size_t		i;

	dest = destination;
	src = source;
	i = 0;
	if (src > dest)
	{
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (src < dest)
	{
		while (size != 0)
		{
			size--;
			dest[size] = src[size];
		}
	}
	return (dest);
}
