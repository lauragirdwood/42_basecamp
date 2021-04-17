/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira- <lvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:37:36 by lvieira-          #+#    #+#             */
/*   Updated: 2021/04/16 20:56:10 by lvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			aux;

	i = 0;
	aux = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		aux = s1[i] - s2[i];
		if (s1[i] != s2[i])
		{
			return (aux);
		}
		i++;
	}
	return (aux);
}
