/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <anferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:36:50 by anferrei          #+#    #+#             */
/*   Updated: 2021/04/16 11:18:04 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int retorno;

	retorno = 1;
	i = 0;
	while (str[i] != '\0' && retorno == 1)
	{
		if ((str[i] < '0' || str[i] > '9'))
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
