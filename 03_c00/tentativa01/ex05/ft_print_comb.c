/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 06:23:56 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/07 20:26:53 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}
int counter = 0;
void	ft_print_in_order(int first, int second, int third)
{
	
	ft_print_char(first);
	ft_print_char(second);
	ft_print_char(third);
	counter++;
	if (first < '7') //aspas simples ve o conteudo da variavel ASCII 55
	{
		write(1, ", ", 2);
	} 
	if (first == '7') {
		printf("\n%d\n", counter);
	}
	
}

void	ft_print_comb(void)
{
	int		first;
	int		second;
	int		third;
	
	first = '0';
	second = '1';
	third = '2';
	while (first <= '7')
	{
		while (second <= '8')
		{	
			while (third <= '9')
			{
				ft_print_in_order(first, second, third);
				third++;
			}
			second++;
			third = second + 1;
		}
		first++;
		second = first;
	}

	
}
