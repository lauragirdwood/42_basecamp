/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferrei <anferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 00:58:19 by anferrei          #+#    #+#             */
/*   Updated: 2021/04/16 11:48:36 by anferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int proximo;

	proximo = 1;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && proximo == 0)
		{
			if (str[i] < 'a' || str[i] > 'z')
				proximo = 1;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') && proximo == 1)
		{
			str[i] = str[i] - 32;
			proximo = 0;
		}
		else if ((str[i] >= '0' && str[i] <= '9') && proximo == 1)
			proximo = 0;
		i++;
	}
	return (str);
}
