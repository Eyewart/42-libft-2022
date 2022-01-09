/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:55:18 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/09 16:24:16 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_bzero(void *pointer, size_t count)
{
	unsigned char *ptr;
	ptr = pointer;

	while (pointer && count)
	{
		*ptr++ = '/0';
		count--;
	}
	return (pointer);
}