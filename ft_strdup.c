/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:08:01 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/16 13:10:32 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*str1)
{
	int		size;
	char	*ptr;
	int		i;

	i = 0;
	size = ft_strlen(str1);
	ptr = malloc(sizeof(*str1) * size);
	if (ptr == 0)
		return (0);
	while (i < size)
	{
		ptr[i] = str1[i];
		i++;
	}
	return (ptr);
}
