/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:21:57 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 23:11:57 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char *s1;
	char *s2;

	s1 = calloc(10, sizeof(char));
	s2 = calloc(10, sizeof(char));
	s2 = "abcdefghzzzzzi";
	s1 = "abcdEfgh ";
	printf("s1: %s, s2: %s\n", s1, s2);
	printf("n = 6; ft_cmp: %d, og_cmp: %d\n", ft_strncmp(s1, s2, 6), strncmp(s1, s2, 6));
	printf("n = 10; ft_cmp: %d, og_cmp: %d\n", ft_strncmp(s1, s2, 10), strncmp(s1, s2, 10));
	printf("n = 0; ft_cmp: %d, og_cmp: %d\n", ft_strncmp(s1, s2, 0), strncmp(s1, s2, 0));
	return (0);
}
