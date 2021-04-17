/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 16:17:14 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/04/13 04:55:56 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int        main(void)
{
    char *src;
    char dest[15];

    src = "Lucas Nessi";
    printf("origem src: %s\n", src);
    ft_strncpy(dest, src, 12);
    printf("destino dest: %s\n", dest);

}
