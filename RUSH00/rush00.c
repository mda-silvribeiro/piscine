/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ru.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:12:06 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/09 20:18:24 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_funx(int a)
{
	int	au1;

	au1 = a;
	while (a != 0)
	{
		if (a == au1 || a == 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		--a;
	}
	ft_putchar('\n');
	a = au1;
}

void	rush(int x, int y)
{
	int au1;
	int au2;

	au1 = x;
	au2 = y;
	ft_funx(au1);
	if (y > 1)
	{
		while (y-- != 2)
		{
			if (x != 1 && x > 0)
				if (y <= au2 || y > 3)
					ft_putchar(124);
			while (x-- > 2)
			{
				ft_putchar(' ');
			}
			x = au1;
			ft_putchar(124);
			ft_putchar('\n');
		}
		y = au2;
		ft_funx(au1);
	}
}
