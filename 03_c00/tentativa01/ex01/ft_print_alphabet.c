/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 05:49:43 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/05 15:09:09 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;
	int		alphabet_size;

	letra = 'a';
	alphabet_size = 1;
	while (alphabet_size <= 26)
	{
		write(1, &letra, 1);
		letra++;
		alphabet_size++;
	}
}
