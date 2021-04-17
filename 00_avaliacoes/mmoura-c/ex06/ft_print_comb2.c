/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoura-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:57:26 by mmoura-c          #+#    #+#             */
/*   Updated: 2021/04/06 16:39:29 by mmoura-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert(int n)
{
	char dezena;
	char unidade;

	dezena = n / 10 + '0';
	unidade = n % 10 + '0';
	write(1, " ", 1);
	write(1, &dezena, 1);
	write(1, &unidade, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			convert(i);
			convert(j);
			if (j != 99)
			{
				write(1, ",", 1);
			}
			j++;
		}
		if (i != 98)
		{
			write(1, ",", 1);
		}
		i++;
	}
}
