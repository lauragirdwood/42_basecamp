/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoreira <fmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:39:59 by fmoreira          #+#    #+#             */
/*   Updated: 2021/04/15 00:20:15 by fmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 64)
		{
			return (0);
		}
		else if (str[i] >= 91 && str[i] <= 96)
		{
			return (0);
		}
		else if (str[i] >= 123)
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
