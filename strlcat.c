/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:24:20 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/09 14:16:06 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	i;
	unsigned int	j;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	if (size <= size_dest)
		return (size_src + size);
	i = size_dest;
	j = 0;
	while (size > 0 && i < size - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = 0;
	while (src[j++])
		i++;
	return (i);
}