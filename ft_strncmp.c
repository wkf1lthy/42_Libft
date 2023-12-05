/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:23:17 by hbouchel          #+#    #+#             */
/*   Updated: 2023/10/27 18:09:34 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	while ((s11[i] != '\0' || s22[i] != '\0') && i < n)
	{
		if (s11[i] > s22[i])
			return (1);
		if (s11[i] < s22[i])
			return (-1);
		i++;
	}
	return (0);
}
