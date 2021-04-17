/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizfern <luizfern@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:09:33 by luizfern          #+#    #+#             */
/*   Updated: 2021/04/16 05:10:10 by luizfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** I can break whiles with a break linesssssssssssssss
*/

int		ft_atoi(char *str)
{
	int a;
	int sign;
	int b;

	a = 0;
	b = 0;
	sign = 1;
	while (str[a] == '\f' || str[a] == '\t' || str[a] == ' '
	|| str[a] == '\n' || str[a] == '\r' || str[a] == '\v')
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign = sign * (-1);
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		b = (b * 10) + str[a] - 48;
		a++;
	}
	b = sign * b;
	return (b);
}
