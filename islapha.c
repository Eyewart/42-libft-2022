/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   islapha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Hassan <hrifi-la@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:20:19 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/09 14:14:43 by Hassan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalpha(int character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	else if (character >= 'A' && character <= 'Z')
		return (1);
	return (0);
}
