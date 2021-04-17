/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raugusto <raugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:33:37 by raugusto          #+#    #+#             */
/*   Updated: 2021/04/16 17:57:12 by raugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int src_inter;

	i = 0;
	src_inter = 0;
	while (dest[i] != '\0')
		i++;
	while ((src[src_inter] != '\0') && (src_inter < nb))
	{
		dest[i] = src[src_inter];
		src_inter++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
