/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 13:11:30 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/14 11:38:11 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;

	s1 = calloc(10, sizeof(char)); 
	s2 = calloc(8, sizeof(char)); 
	s3 = calloc(10, sizeof(char)); 
	s4 = calloc(10, sizeof(char)); 
	s1 = "ABC";
	s2 = "ABC";
	s3 = "abcdEfghi";
	s4 = "ab0defghi";
	printf("s1: %s, s2: %s, s3: %s, s4: %s\n", s1, s2, s3, s4);
	printf("cmp_12 = %d, og_cmp_12 = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("cmp_13 = %d, og_cmp_13 = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("cmp_14 = %d, og_cmp_14 = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	return(0);
}
/*
           $ ./string_comp ABC ABC
           <str1> and <str2> are equal
           $ ./string_comp ABC AB      # 'C' is ASCII 67; 'C' - ' ' = 67
           <str1> is greater than <str2> (67)
           $ ./string_comp ABA ABZ     # 'A' is ASCII 65; 'Z' is ASCII 90
           <str1> is less than <str2> (-25)
           $ ./string_comp ABJ ABC
           <str1> is greater than <str2> (7)
           $ ./string_comp $'\201' A   # 0201 - 0101 = 0100 (or 64 decimal)
           <str1> is greater than <str2> (64)
*/