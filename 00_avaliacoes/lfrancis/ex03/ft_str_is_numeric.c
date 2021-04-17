/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 01:10:35 by lfrancis          #+#    #+#             */
/*   Updated: 2021/04/13 05:01:43 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] < '0') || (str[index] > '9'))
			return (0);
		index++;
	}
	return (1);
}
