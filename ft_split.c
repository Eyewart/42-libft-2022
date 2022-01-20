/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:18:16 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/20 12:49:22 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_tab(char const *string, char c)
{
	int	i;
	int	size;

	size = 0;
	i = 0;
	while (string && string[i])
	{
		while (string[i] == c)
			i++;
		if (string[i])
			size++;
		while (string[i] != c && string[i] != 0)
			i++;
	}
	return (size);
}

static char	*malloc_string(int len, char **tab_str, int j)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		while (i < j)
		{
			free(tab_str[i]);
			i++;
		}
		free(tab_str);
		return (0);
	}
	return (str);
}

static char	**malloc_tab(char **tab, char const *s, char c)
{
	char **tab_s;
	
	tab_s = malloc(sizeof(tab) * (size_tab(s, c) + 1));
	if (!tab_s)
		return (NULL);
	return (tab_s);
}

static char	**run_split(char const *s, char c, int i, int j)
{
	int		str_l;
	char	**tab_strings;
	int		k;

	tab_strings = malloc_tab(tab_strings, s, c); 
	while (s && s[i])
	{
		while (s[i] == c)
			i++;
		str_l = 0;
		while (s[i + str_l] != c && s[i + str_l] != 0)
			str_l++;
		if (str_l == 0)
			break ;
		tab_strings[j] = malloc_string(str_l, tab_strings, j);
		if (!tab_strings[j])
			return NULL;
		k = 0;
		while (k < str_l && str_l != 0)
			*(tab_strings[j] + k++) = s[i++];
		*(tab_strings[j] + k) = 0;
		j++;
	}
	tab_strings[j] = 0;
	return (tab_strings);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (run_split(s, c, 0, 0));
}
