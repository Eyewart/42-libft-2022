/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:56:34 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/17 22:05:09 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	*ptr;
	unsigned char	c_e;

	ptr = (unsigned char *)s;
	c_e = (unsigned char)c;
	while (size--)
	{
		if (*ptr == c_e)
			return (ptr);
		ptr++;
	}
	return (0);
}
