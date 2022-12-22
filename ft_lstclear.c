/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:28:15 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/17 18:20:04 by hrifi-la         ###   ########.fr       */
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
