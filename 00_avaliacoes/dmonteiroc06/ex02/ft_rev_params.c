/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxavier- <lxavier-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:49:45 by dmonteir          #+#    #+#             */
/*   Updated: 2021/04/17 02:33:33 by lxavier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int f;

	i = argc;
	f = 0;
	if (argc > 1)
	{
		while (i > 0)
		{
			f = 0;
			while (argv[i][f] != '\0')
			{
				write(1, &argv[i][f], 1);
				f++;
			}
			i--;
			write(1, "\n", 1);
		}
	}
	return (0);
}
