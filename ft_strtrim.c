/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 20:49:13 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/09 23:15:33 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		d;
	int		g;
	int		size;

	size = ft_len(s1);
	i = 0;
	d = 0;
	g = 0;
	ptr = malloc(sizeof(*s1) * size);
	if (ptr == 0)
		return (0);
	while (set[i])
	{
		while (s1[d] == set[i])
			d++;
		i++;
	}
	while ((size - 1) != d || set[i])
	{
		while (s1[size] == set[i])
			size--;
		i++;
	}
	while (d < size)
		ptr[g++] = s1[d++];
	return (ptr);
}