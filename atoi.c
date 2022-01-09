/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:58:42 by Hassan            #+#    #+#             */
/*   Updated: 2022/01/09 14:16:02 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 0;
	result = 0;
	while (is_space(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = 10 * result + (str[i] - '0');
		i++;
	}
	if (sign % 2 != 0)
		result *= (-1);
	return (result);
}