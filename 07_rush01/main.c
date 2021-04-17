/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:16:56 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/12 14:11:07 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(int argc, char *argv[])
{
	printf("argc: %d\n", argc);
	printf("dentro do *argv[]\n");

	int i;
	i = 0;

	while(i < argc)
	{
		printf("*argv[%d] = %s\n", i, argv[i]);
		i++;
	}
}
	//int j;
	// // 	printf("*argv[%d] = %s\n", i, argv[i]);
	// // 	// n funciona %c printf("*argv[%d] = %c\n", i, argv[i]);
	//j = 0;
	// 	while ()
	// 	if (i > 0 && (*argv[1] >= 49 && *argv[i] <= 52)) //&& valida se *argv[i] é um numero) 
	// 	{
	// 		arr[j] = *argv[i];
	// 		printf("\narr[%d] = %c\n", j, arr[j]);
	// 		j++;
	// 	}
	// 	i++;
	// }
//}