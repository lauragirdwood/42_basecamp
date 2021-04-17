/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:16:49 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/08 22:21:20 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 13;
	b = 24;
	pa = &a;
	pb = &b;
	printf("\na: %d - b: %d", a, b);
	ft_swap(pa, pb);
	printf("\na: %d - b: %d", a, b);
	return (0);	
}
