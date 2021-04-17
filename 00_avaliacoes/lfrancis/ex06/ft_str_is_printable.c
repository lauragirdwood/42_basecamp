/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrancis <lfrancis@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:23:11 by lfrancis          #+#    #+#             */
/*   Updated: 2021/04/13 02:32:05 by lfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int index;

	index = 0;
	while ((str[index]) != '\0')
	{
		if ((str[index] <= 32) || (str[index] == 127))
			return (0);
		index++;
	}
	return (1);
}
