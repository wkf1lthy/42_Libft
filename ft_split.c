/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 22:19:41 by hbouchel          #+#    #+#             */
/*   Updated: 2023/10/26 17:17:08 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	countwords(char const *s, char c)
{
	int	count;
	int	in_substring;

	in_substring = 0;
	count = 0;
	while (*s)
	{
		if (in_substring && *s == c)
			in_substring = 0;
		if (!in_substring && *s != c)
		{
			in_substring = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int	word_length(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

static void	*leak_free(char **result, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = countwords(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		result[i] = ft_substr(s, 0, word_length(s, c));
		if (!result[i])
			return (leak_free(result, i));
		s += word_length(s, c);
		i++;
	}
	result[i] = NULL;
	return (result);
}
