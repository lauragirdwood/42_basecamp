/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakira-f <fakira-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 06:36:50 by fakira-f          #+#    #+#             */
/*   Updated: 2021/04/13 06:59:24 by fakira-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int sorted;
	int index;

	sorted = 0;
	index = 0;
	while (sorted == 0)
	{
		sorted = 1;
		while (index < (size - 1))
		{
			if (tab[index] > tab[index + 1])
			{
				ft_swap(&tab[index], &tab[index + 1]);
				sorted = 0;
			}
			index++;
		}
		index = 0;
	}
}
