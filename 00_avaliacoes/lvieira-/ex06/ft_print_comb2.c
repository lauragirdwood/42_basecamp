/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:19:17 by lvieira-          #+#    #+#             */
/*   Updated: 2021/04/08 13:49:44 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l)
{
	write(1, &l, 1);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar('0' + (y / 10));
			ft_putchar('0' + (x % 10));
			ft_putchar(32);
			ft_putchar('0' + (y / 10));
			ft_putchar('0' + (y % 10));
			
			write(1, ", ", 1);
			y++;
		}
		x++;
	}
}
