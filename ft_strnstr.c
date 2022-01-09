/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:10:05 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/09 16:26:41 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	char *str;
	int i;
	int j;

	str = (char *)s;
	i = 0;
	j = 0;
	if (to_find[i] == 0)
		return (str);
	while (str[i] != 0 && len != 0)
	{
		if (str[i] == to_find[0])
		{
			while (str[i + j] == to_find[j] && len != 0)
			{
				if (to_find[j + 1] == 0)
					return (&str[i]);
				j++;
				len--;
			}
			len = len + j;
			j = 0;
		}
		i++;
		len--;
	}
	return (0);
}

