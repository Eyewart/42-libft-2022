/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:56:34 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/09 14:16:16 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memchr(const void *s, int c, size_t size)
{
	unsigned char *ptr = (unsigned char*)s;

	while (size-- && s != 0)
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (0);
}