/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joemanue <joemanue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:53:22 by joemanue          #+#    #+#             */
/*   Updated: 2021/04/12 20:45:21 by joemanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int cont;

	if (str == '\0')
	{
		return (1);
	}
	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] < '0' || str[cont] > '9')
		{
			return (0);
		}
		cont++;
	}
	return (1);
}
