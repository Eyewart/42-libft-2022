/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:55:18 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/15 19:17:09 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *pointer, size_t count)
{
	unsigned char	*ptr;

	ptr = pointer;
	while (pointer && count)
	{
		*ptr++ = '/0';
		count--;
	}
	return (pointer);
}
