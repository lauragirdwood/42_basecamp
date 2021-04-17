/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 03:11:04 by lxavier-          #+#    #+#             */
/*   Updated: 2021/04/13 06:04:17 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || (!ft_str_is_alpha(&str[i - 1])
			&& !ft_str_is_numeric(&str[i - 1])))
			ft_strupcase(&str[i]);
		else
			ft_strlowcase(&str[i]);
		i++;
	}
	return (str);
}

int		ft_str_is_alpha(char *str)
{
	if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		return (0);
	return (1);
}

int		ft_str_is_numeric(char *str)
{
	if (*str < '0' || *str > '9')
		return (0);
	return (1);
}

char	*ft_strupcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	return (str);
}

char	*ft_strlowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str = *str + 32;
	return (str);
}
