/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:44:35 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/17 14:55:30 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{


	if (!s || !f)
		return (NULL);
	s_final = malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (s_final == 0)
		return (NULL);
	while (s && s[i])
	{
		s_final[i] = f(i, s_final[i]);
		i++;
	}
	s_final[i] = 0;
	return(s_final);
}