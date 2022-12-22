/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:06:55 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/18 22:29:26 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	char			tmp[10];
	int				i;

	i = 0;
	nb = n;
	if (!n)
		write(fd, "0", 1);
	if (n < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	while (nb)
	{
		tmp[i++] = (nb % 10) + 48;
		nb = nb / 10;
	}
	while (i--)
		write(fd, &tmp[i], 1);
}
