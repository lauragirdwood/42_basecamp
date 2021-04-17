/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakira-f <fakira-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 06:21:35 by fakira-f          #+#    #+#             */
/*   Updated: 2021/04/13 06:32:02 by fakira-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int index;

	index = 0;
	size--;
	while (index < size)
	{
		ft_swap(&tab[index], &tab[size]);
		index++;
		size--;
	}
}
