/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 21:36:10 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/09 16:26:41 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy (void *dest, const void *src, size_t size)
{
	 char *ptr_d;
	 char *ptr_s;

	if (src == 0 || dest == 0)
		return dest;
	 ptr_d = dest;
	 ptr_s = src;
	while (size--)
		*ptr_d++ = *ptr_s++;
	return (dest);
}