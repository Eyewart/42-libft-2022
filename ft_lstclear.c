/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:28:15 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/17 15:45:19 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*next_save;

	if (!lst || (!(*lst) || !del))
		return ;
	temp = *lst;
	while (temp)
	{ 
		(*del)(temp->content);
		next_save = temp->next;
		free(temp);
		temp = next_save;
	}
	*lst = NULL;
}