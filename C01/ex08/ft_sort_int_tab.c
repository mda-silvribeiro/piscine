/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:22:45 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/12 15:54:28 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int count;
	int aux;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			aux = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = aux;
			count = 0;
		}
		else
		{
			count++;
		}
	}
}
