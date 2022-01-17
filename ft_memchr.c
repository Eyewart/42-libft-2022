/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:56:34 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/15 19:29:32 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (size-- && s != 0)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (0);
}
