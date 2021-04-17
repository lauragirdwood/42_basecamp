/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoura-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:57:26 by mmoura-c          #+#    #+#             */
/*   Updated: 2021/04/08 16:20:27 by mmoura-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_power(int n, int p)
{
	int np;

	np = n;
	if (p != 0)
	{
		while (p > 1)
		{
			np *= n;
			p--;
		}
		return (np);
	}
	else
	{
		return (1);
	}
}

int		ft_limit(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		return (147483648);
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	int i;
	int nbaux;

	nb = ft_limit(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb *= -1);
	}
	else
	{
		i = 0;
		nbaux = nb;
		while (nbaux / 10 != 0)
		{
			i++;
			nbaux /= 10;
		}
		ft_putchar(nb / ft_power(10, i) + '0');
		if (i != 0)
		{
			ft_putnbr(nb % ft_power(10, i));
		}
	}
}
