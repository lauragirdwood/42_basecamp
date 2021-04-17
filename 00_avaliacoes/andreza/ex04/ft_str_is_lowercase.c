/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <anferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:52:41 by anferrei          #+#    #+#             */
/*   Updated: 2021/04/16 11:18:56 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int retorno;

	retorno = 1;
	i = 0;
	while (str[i] != '\0' && retorno == 1)
	{
		if ((str[i] < 'a' || str[i] > 'z'))
		{
			retorno = 0;
		}
		else
		{
			retorno = 1;
		}
		i++;
	}
	return (retorno);
}
