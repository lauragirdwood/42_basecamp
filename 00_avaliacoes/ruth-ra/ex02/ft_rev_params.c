/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:42:46 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/04/14 17:50:53 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		str = argv[i];
		while (str[j] != '\0')
		{
			write(1, &str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
}
