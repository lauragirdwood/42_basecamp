/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:44:26 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/10 01:46:02 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int		a;
	int		b;

	a = 13;
	b = 2;

	printf("\na: %d - b: %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);
	
	//ft_ultimate_div_mod(pa, pb);
	printf("\ndivisao: %d - modulo: %d\n", a, b);
}
