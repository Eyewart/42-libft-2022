/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:08:01 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/09 17:07:57 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char	*str1)
{
	int		size;
	char	*ptr;

	size = ft_strlen(str1);
	ptr = malloc(sizeof(str1) * size);
	return (ptr);
}

