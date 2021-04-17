/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 00:33:18 by anferrei          #+#    #+#             */
/*   Updated: 2021/04/16 22:40:02 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int retorno;

	i = 0;
	retorno = 1;
	while (str[i] != '\0' && retorno == 1)
	{
		if (str[i] < 32)
		{
			retorno = 0;
		}
		i++;
	}
	return (retorno);
}
