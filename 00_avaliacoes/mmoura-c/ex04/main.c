/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 01:13:37 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/05 01:14:21 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_is_negative(int n);

int		main(void)
{
	int		number_test;

	printf("\nDigite o numero a ser testado: ");
	scanf("%d", &number_test);
	printf("verificando se numero %d exibe P: ", number_test);
	printf("\n");
	ft_is_negative(number_test);
	printf("\n");
	return (0);
}
