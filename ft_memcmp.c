/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:19:52 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/09 16:26:41 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp (const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char	*c1 = (unsigned char *) ptr1;
	unsigned char	*c2 = (unsigned char *) ptr2;

	if (ptr1 == 0 || ptr2 == 0)
        return 0;
	while ((*c1 - *c2) == 0 && size)
	{
		c1++;
		c2++;
		size--;
	}
	return (*c1 - *c2);
}