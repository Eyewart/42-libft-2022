/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:44:35 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/16 17:49:42 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s_final;

	if (!s || !f)
		return (NULL);
	s_final = malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (s_final == 0)
		return (NULL);
	while (s && s[i])
	{
		s_final[i] = f(i, s_final[i]);
		i++;
	}
	s_final[i] = 0;
	return(s_final);
}