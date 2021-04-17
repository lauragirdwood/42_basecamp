/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:51:58 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/12 22:13:34 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strcpy(char *dest, char *src);

int        main()
{
    char str[] = "Hello tudo bem";
    char buffer[20];

    printf("dest: %s\n", ft_strcpy(buffer, str));
    return (0);
}