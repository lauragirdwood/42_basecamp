/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joemanue <joemanue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:21:57 by joemanue          #+#    #+#             */
/*   Updated: 2021/04/12 17:52:12 by joemanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int cont;

	if (str == '\0')
	{
		return (1);
	}
	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] < 'A'
		|| (str[cont] > 'Z' && str[cont] < 'a')
		|| str[cont] > 'z')
		{
			return (0);
		}
		cont++;
	}
	return (1);
}
