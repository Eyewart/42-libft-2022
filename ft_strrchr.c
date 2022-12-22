/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:54:00 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/17 23:17:13 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	ch;
	int		size;

	ch = (char) c;
	str = (char *) s;
	size = ft_strlen(s) - 1;
	if (c == 0)
		return (&str[ft_strlen(s)]);
	while (size >= 0)
	{
		if (str[size] == ch)
			return (&str[size]);
		size--;
	}
	return (0);
}
