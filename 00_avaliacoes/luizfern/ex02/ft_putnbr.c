/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <luizfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:01:17 by luizfern          #+#    #+#             */
/*   Updated: 2021/04/16 03:09:05 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_rev_array(int array[], int length)
{
	char	print;
	int		count;

	count = 0;
	while (count < length)
	{
		print = array[length - 1] + '0';
		write(1, &print, 1);
		length--;
	}
}

int		return_positive(int number)
{
	if (number == 0)
	{
		write(1, "0", 1);
	}
	if (number < 0)
	{
		write(1, "-", 1);
		if (number == -2147483648)
		{
			write(1, "2", 1);
			number = 147483648;
			return (number);
		}
		else
		{
			number *= (-1);
			return (number);
		}
	}
	else
	{
		return (number);
	}
}

void	ft_putnbr(int nb)
{
	int c;
	int number_array[10];

	c = 0;
	nb = return_positive(nb);
	while (nb != 0)
	{
		number_array[c] = nb % 10;
		nb /= 10;
		c++;
	}
	print_rev_array(number_array, c);
}
