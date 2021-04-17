/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alme <sde-alme@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:21:34 by sde-alme          #+#    #+#             */
/*   Updated: 2021/04/16 22:49:12 by sde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int p;

	p = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (nb % p != 0)
		p++;
	if (nb == p)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
