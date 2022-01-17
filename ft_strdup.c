/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:08:01 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/17 23:59:13 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*str1)
{
	int		size;
	char	*ptr;
	int		i;

	i = 0;
	size = ft_strlen(str1) + 1;
	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
		return (0);
	while (i < size)
	{
		ptr[i] = str1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
