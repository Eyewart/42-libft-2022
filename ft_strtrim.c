/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:49:13 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/16 13:36:59 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_start(const char *str, const char *set)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (str[s])
	{
		while (set[i])
		{
			if (str[s] == set[i])
				break ;
			i++;
		}
		if (set[i] == 0)
			return (s);
		i = 0;
		s++;
	}
	return (s);
}

static int	find_end(const char *str, const char *set)
{
	int	i;
	int	e;

	e = ft_strlen(str) - 1;
	i = 0;
	while (str[e])
	{
		while (set[i])
		{
			if (str[e] == set[i])
				break ;
			i++;
		}
		if (set[i] == 0)
			return (e);
		i = 0;
		e--;
	}
	return (e);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*ptr;
	int			start;
	int			end;
	int			size;

	if (!s1 || !set)
		return (0);
	start = find_start (s1, set);
	end = find_end (s1, set);
	if (start > end)
		return (ft_strdup(""));
	size = (end - start) + 2;
	ptr = malloc(sizeof(*s1) * size);
	if (ptr == 0)
		return (0);
	ft_strlcpy ((char *)ptr, (char *)&s1[start], size);
	return ((char *)ptr);
}
