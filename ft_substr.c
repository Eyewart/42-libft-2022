/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:41:08 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/19 19:45:49 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	size;

	i = 0;
	if (!s)
		return (0);
	size = 0;
	if (start > ft_strlen(s))
		size = 1;
	else if ((start + len) > ft_strlen(s))
		size = (1 + ft_strlen(s) - start);
	else
		size = (len + 1);
	ptr = malloc(sizeof(char) * (size));
	if (!ptr)
		return (0);
	while (i < len && (start + i) < ft_strlen(s))
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
