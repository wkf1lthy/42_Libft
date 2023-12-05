/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:48:18 by hbouchel          #+#    #+#             */
/*   Updated: 2023/10/23 21:10:23 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	resultat;
	char	*ret;

	resultat = nmemb * size;
	ret = malloc(resultat);
	if (!ret)
		return (NULL);
	ft_bzero(ret, resultat);
	return (ret);
}
