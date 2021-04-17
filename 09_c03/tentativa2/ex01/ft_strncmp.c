/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 06:20:40 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/15 12:17:49 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int        i;

    i = 0;
    while (i < n - 1 && s1[i] != '\0' && s1[i] == s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
