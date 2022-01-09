/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:20:19 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/04 17:13:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalnum(int c)
{
	return (isalpha(c) || isdigit(c));
}

int	isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
