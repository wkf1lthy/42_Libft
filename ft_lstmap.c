/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:01:57 by hbouchel          #+#    #+#             */
/*   Updated: 2023/10/26 21:28:19 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmpf;
	t_list	*temp;

	new = NULL;
	while (lst)
	{
		tmpf = f(lst->content);
		temp = ft_lstnew(tmpf);
		if (!temp)
		{
			ft_lstclear(&new, del);
			del(tmpf);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}
