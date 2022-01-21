/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 22:15:51 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/21 12:24:01 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*ptr_d;
	char	*ptr_s;

	if (src == 0 && dest == 0)
		return (dest);
	ptr_d = (char *)dest;
	ptr_s = (char *)src;
	if (dest < src)
		return (ft_memcpy(ptr_d, ptr_s, size));
	if (dest > src)
	{
		ptr_d = ptr_d + (size - 1);
		ptr_s = ptr_s + (size - 1);
		while (size--)
			*ptr_d-- = *ptr_s--;
	}
	return (dest);
}
