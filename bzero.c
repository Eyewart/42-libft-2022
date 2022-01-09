/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:41:44 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/09 14:15:47 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *bzero(void *pointer, size_t count)
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