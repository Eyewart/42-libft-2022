/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:18:16 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/12 00:56:34 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		size_tab(char const *string, char c)
{
	int i;
	int size;

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

char	**run_split(char const *s, char c, int i, int j)
{
	int		str_l;
	char	**tab_strings;
	int		k;

	tab_strings = malloc(sizeof(tab_strings) * (size_tab(s, c) + 1));
	while (s && s[i])
	{
		while(s[i] == c)
			i++;
		str_l = 0;
		while(s[i + str_l] != c && s[i + str_l] != 0)
			str_l++;
		if (str_l == 0)
			break;
		tab_strings[j] = malloc(sizeof(char) * (str_l + 1));
		k = 0;
		while (k < str_l && str_l != 0)
		{
			*(tab_strings[j] + k) = s[i];
			i++;
			k++;
		}
		*(tab_strings[j] + k) = 0;
		//printf("-->%s\n", tab_strings[j]);
		j++;
	}
	tab_strings[j] = 0;
	return (tab_strings);
}

char	**ft_split(char const *s, char c)
{
	return(run_split(s, c, 0, 0));
}
