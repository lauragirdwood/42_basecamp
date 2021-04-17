/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrancis <lfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:27:53 by lfrancis          #+#    #+#             */
/*   Updated: 2021/04/13 01:07:49 by lfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] < 'A') || (str[index] > 'Z' && str[index] < 'a')
		|| (str[index] > 'z'))
			return (0);
		index++;
	}
	return (1);
}
