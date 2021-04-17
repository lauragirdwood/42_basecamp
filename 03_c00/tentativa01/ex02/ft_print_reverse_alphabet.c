/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 05:52:46 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/05 15:10:39 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letra;
	int		alphabet_size;

	letra = 'z';
	alphabet_size = 26;
	while (alphabet_size > 0)
	{
		write(1, &letra, 1);
		letra--;
		alphabet_size--;
	}
}
