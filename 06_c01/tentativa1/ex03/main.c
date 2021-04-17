/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:53:47 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/08 12:38:46 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int		a;
	int		b;

	a = 13;
	b = 4;

	printf("\na: %d - b: %d - *div: %d - *mod: %d\n", a, b, a, b);

	ft_div_mod(a, b, &a, &b);

	printf("\na: %d - b: %d - *div: %d - *mod: %d\n", a, b, a, b);
}
