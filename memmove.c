/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 22:15:51 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/09 14:16:12 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy (void *dest, const void *src, size_t size)
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

void *memmove(void *dest, const void *src, size_t size)
{
	char *ptr_d;
	char *ptr_s;

	if (src == 0 || dest == 0)
		return (dest);
	ptr_d = dest;
	ptr_s = src;
	if (dest >= src)
		return (memcpy(ptr_d, ptr_s, size));
	else
	{
		ptr_d = ptr_d + size;
		ptr_s = ptr_s + size;
		while (ptr_s != size)
			*ptr_d-- = *ptr_s--;
	}
	return (dest);
}