/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 01:03:31 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/05 01:13:21 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int number)
{
	char	result;

	if (number >= 0)
	{
		result = 'P';
		write(1, &result, 1);
	}
	else
	{
		result = 'N';
		write(1, &result, 1);
	}
}
