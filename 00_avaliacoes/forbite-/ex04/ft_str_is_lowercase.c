/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:10:32 by forbite-          #+#    #+#             */
/*   Updated: 2021/04/13 14:42:24 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_nonalpha(int n)
{
	if ((n > 64 && n < 91) || (n > 96 && n < 123))
		return (1);
	return (0);
}

int		ft_char_is_lowercase(int n)
{
	if (n < 'a' && n > 'z')
		return (0);
	return (1);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_char_is_nonalpha((int)str[i])))
			return (0);
		if (ft_char_is_uppercase((int)str[i]))
			return (0);
		i++;
	}
	return (1);
}
