/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:00:45 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/13 13:51:45 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a;
	int *b;

	a = calloc(1, sizeof(int));
	b = calloc(1, sizeof(int));
	*a = 42;
	*b = 0;

	printf("a: %p, *a: %d, b: %p, *b: %d\n", a, *a, b, *b);
	ft_ultimate_div_mod(a, b);
	printf("a: %p, *div: %d, b: %p, *mod: %d\n", a, *a, b, *b);
	return (0);
}
