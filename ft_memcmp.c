/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:19:52 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/17 23:04:41 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned char	*c1;
	unsigned char	*c2;
	unsigned int	i;

	if (size == 0)
		return (0);
	i = size - 1;
	c1 = (unsigned char *) ptr1;
	c2 = (unsigned char *) ptr2;
	while ((*c1 == *c2) && i)
	{
		c1++;
		c2++;
		i--;
	}
	return (*c1 - *c2);
}
