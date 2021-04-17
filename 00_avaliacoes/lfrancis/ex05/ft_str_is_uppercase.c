/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrancis <lfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:06:10 by lfrancis          #+#    #+#             */
/*   Updated: 2021/04/13 02:20:35 by lfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int index;

	index = 0;
	while ((str[index]) != '\0')
	{
		if ((str[index] < 'A') || (str[index] > 'Z'))
			return (0);
		index++;
	}
	return (1);
}
