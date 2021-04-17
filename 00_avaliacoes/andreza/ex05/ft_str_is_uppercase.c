/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <anferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:38:35 by anferrei          #+#    #+#             */
/*   Updated: 2021/04/16 11:19:47 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int retorno;

	retorno = 1;
	i = 0;
	while (str[i] != '\0' && retorno == 1)
	{
		if ((str[i] < 'A' || str[i] > 'Z'))
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
