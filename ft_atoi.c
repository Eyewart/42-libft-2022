/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:58:42 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/20 17:15:06 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static long	int	get_result(const char *str, int sign)
{
	long int	result;
	int			j;

	j = 0;
	result = 0;
	while (str[j] >= '0' && str[j] <= '9')
		result = 10 * result + (str[j++] - '0');
	if (j > 19 || result < 0)
	{
		if (sign < 0)
			return (0);
		return (-1);
	}
	return ((int)result * sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str && str[i] == '0')
		i++;
	return (get_result((&str[i]), sign));
}
