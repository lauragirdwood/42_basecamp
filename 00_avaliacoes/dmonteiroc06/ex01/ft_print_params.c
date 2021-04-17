/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:38:33 by dmonteir          #+#    #+#             */
/*   Updated: 2021/04/16 21:57:57 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int f;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			f = 0;
			while (argv[i][f] != '\0')
			{
				write(1, &argv[i][f], 1);
				f++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
