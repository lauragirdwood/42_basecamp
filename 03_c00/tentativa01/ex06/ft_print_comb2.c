/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 02:07:31 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/07 20:29:35 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_char(char c);
void	ft_print_in_order(char first, char second, char third, char fourth);
void	ft_print_third_fourth(char first, char second, char third, char fourth);

void	ft_print_comb2(void)
{
	char	first;
	char	second;
	char	third;
	char	fourth;

	first = '0';
	fourth = '0';
	while (first <= '9')
	{
		second = '0';
		while (second <= '9')
		{
			third = first;
			ft_print_third_fourth(first, second, third, fourth);
			second++;
		}
		first++;
	}
}

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

int counter = 0;
void	ft_print_in_order(char first, char second, char third, char fourth)
{
	ft_print_char(first);
	ft_print_char(second);
	ft_print_char(' ');
	ft_print_char(third);
	ft_print_char(fourth);
	counter++;
	if (first == '9' && second == '8' && third == '9' && fourth == '9')
	{
		printf("\n%d\n", counter);	
	}
	else
	{
		ft_print_char(',');
		ft_print_char(' ');
	}
}

void	ft_print_third_fourth(char first, char second, char third, char fourth)
{
	while (third <= '9')
	{
		if (first == third)
			fourth = second + 1;
		else
			fourth = '0';
		while (fourth <= '9')
		{
			ft_print_in_order(first, second, third, fourth);
			fourth++;
		}
		third++;
	}
}
