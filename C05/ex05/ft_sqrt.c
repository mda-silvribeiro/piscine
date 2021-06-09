/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 18:40:11 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/17 21:43:44 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int aux;
	int count;

	aux = nb;
	count = 1;
	while (aux - count > 0)
	{
		aux = (aux + count) / 2;
		count = nb / aux;
	}
	if (aux * aux == nb)
		return (aux);
	else
		return (0);
}
