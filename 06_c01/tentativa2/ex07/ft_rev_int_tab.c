/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 21:23:12 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/09 21:45:19 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	while (*tab != '\0')
	{
		tab++;
	}

	while (size >= 0)
	{
		printf("%d\n", *tab);
		size--;
		tab--;
	}
}

int		main(void)
{
	int size = 5;
	int arr[] = {1,2,3,4,5};
	int *ptr;
	
	ptr = arr;
	// int i = 0;
	// while (i < size)
	// {
	// 	printf("%d", *ptr);
	// 	i++;
	// }

	ft_rev_int_tab(ptr, size);
}