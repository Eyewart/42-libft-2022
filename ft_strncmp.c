/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:37:33 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/17 23:20:02 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*s1_1;
	unsigned char	*s2_2;

	i = 0;
	s1_1 = (unsigned char *)s1;
	s2_2 = (unsigned char *)s2;
	while ((s1_1[i] != 0 || s2_2[i] != 0) && i < n)
	{
		if (s1_1[i] != s2_2[i])
			return (s1_1[i] - s2_2[i]);
		i++;
	}
	return (0);
}
