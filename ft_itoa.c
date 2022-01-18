/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:02:51 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/18 11:56:04 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*tab_rev(char *tab1, int n, int i)
{
	char	*tab2;
	int		j;

	printf("size: %d", sizeof(tab1));
	tab2 = malloc (sizeof(char) * (ft_strlen(tab1) + 1));
	if (!tab2)
		return (NULL);
	if (n == 0)
		tab2[0] = '0';
	j = 0;
	if (n < 0)
	{
		tab2[j] = '-';
		j++;
	}
	while (i > 0)
		tab2[j++] = tab1[--i];
	if (n != 0)
		tab2[j] = 0;
	return (tab2);
}

char	*ft_itoa(int n)
{
	int				val;
	unsigned int	nb;
	char			*tab;
	int				i;
	char			*tab_r;

	i = 0;
	nb = n;
	tab = malloc (sizeof(char) * 20);
	if (!tab)
		return (NULL);
	if (n < 0)
		nb = nb * (-1);
	while (nb > 0 && n != 0)
	{
		val = nb % 10;
		tab[i++] = val + 48;
		nb = (nb - val) / 10;
	}
	tab_r = tab_rev(tab, n, i);
	free(tab);
	return (tab_r);
}
