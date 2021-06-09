/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:20:27 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/11 15:22:20 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int aux;

	count = 0;
	size = size - 1;
	while (count < size)
	{
		aux = tab[count];
		tab[count] = tab[size];
		tab[size] = aux;
		size--;
		count++;
	}
}
