/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:41:44 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/17 19:32:51 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*ptr;
	unsigned char	v_edit;
	unsigned int	i;

	i = 0;
	v_edit = (unsigned char) value;
	ptr = (unsigned char *) pointer;
	while (i < count)
	{
		*ptr++ = v_edit;
		i++;
	}
	return (pointer);
}
