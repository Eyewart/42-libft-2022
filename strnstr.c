/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 01:10:05 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/09 14:15:31 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *s, const char *to_find, size_t len)
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

