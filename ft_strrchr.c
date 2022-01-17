/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:54:00 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/16 13:29:38 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	ch;
	int		i;
	int		size;

	ch = (char) c;
	str = (char *) s;
	i = 0;
	size = ft_strlen (s);
	while (size)
	{
		if (str[size] == ch)
			return (&str[i]);
		size--;
	}
	return (0);
}
