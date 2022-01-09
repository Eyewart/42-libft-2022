/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:07:51 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/09 16:26:41 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;
	char ch;
	int i;
	
	ch = (char) c;
	str = (char *) s;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	if (str[i] == ch) // in case c == '/0'
		return (&str[i]);
	return (0);
}