/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:06:03 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/17 23:35:49 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	if (size > ft_strlen(src))
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
		return (ft_strlen(src));
	}
	while (i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
