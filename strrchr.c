/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:54:00 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/09 14:15:28 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t strlen(const char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	char ch;
	int i;
	int size;
	
	ch = (char) c;
	str = (char *) s;
	i = 0;
	size = strlen (s);
	while (size)
	{
		if (str[size] == ch)
			return (&str[i]);
		size--;
	}
	return (0);
}