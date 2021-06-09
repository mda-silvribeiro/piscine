/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 10:20:27 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/20 17:32:23 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int count;

	count = 2;
	if (nb < 2)
		return (0);
	if (nb % count != 0)
	{
		if (nb > 1000000 && count > 1000)
			return (1);
		count++;
	}
	if (count == nb)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	int count;

	count = 0;
	while (!ft_is_prime(nb + count))
	{
		count++;
	}
	return (nb + count);
}
