/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:25:52 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/16 21:26:51 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char *str)
{
	if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		return (0);
	return (1);
}

int		is_numeric(char *str)
{
	if (*str < '0' || *str > '9')
		return (0);
	return (1);
}

int		ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (!is_alpha(str) && !is_numeric(str) &&
			*str != '+' && *str != '-')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * sign);
}
