/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:25:56 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/09 14:15:22 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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