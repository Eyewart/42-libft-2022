/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:02:51 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/20 17:15:39 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_tab(int n)
{
	int	val;
	int	i;

	i = 0;
	val = n;
	if (val == 0)
		i++;
	while (val)
	{
		val = val / 10;
		i++;
	}
	if (n < 0)
		return (i + 2);
	else
		return (i + 1);
}

static char	*tab_rev(char *tab1, int n, int i)
{
	char	*tab2;
	int		j;
	int		sign;

	sign = 0;
	if (n < 0)
		sign++;
	tab2 = malloc(sizeof(char) * size_tab(n));
	if (!tab2)
		return (NULL);
	j = 0;
	if (n == 0)
		tab2[j++] = '0';
	if (sign)
		tab2[j++] = '-';
	while (i > 0)
		tab2[j++] = tab1[--i];
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
	tab = malloc(sizeof(char) * size_tab(n));
	if (!tab)
		return (NULL);
	if (n < 0)
		nb = n * (-1);
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
