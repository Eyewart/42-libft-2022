/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:59:44 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/17 19:26:06 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_element = ft_lstnew((*f)(lst->content));
		if (!new_element)
		{
			ft_lstclear(&new_list, (*del));
			return (0);
		}
		else
			ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}
