/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raugusto <raugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:40:14 by raugusto          #+#    #+#             */
/*   Updated: 2021/04/16 17:35:18 by raugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			aux;

	i = 0;
	aux = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		aux = s1[i] - s2[i];
		if (s1[i] != s2[i])
			return (aux);
		i++;
	}
	return (aux);
}
