/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 13:36:39 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/10 14:13:54 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_funx(int a, int b)
{
	int	au1;

	au1 = a;
	while (a != 0)
	{
		if (au1 == 1 && b == 1)
			ft_putchar('A');
		else if (a == au1)
			ft_putchar('A');
		else if (a > 1)
		{
			ft_putchar('B');
		}
		--a;
		if (a == 1 && b >= 1)
		{
			ft_putchar('C');
		}
	}
	ft_putchar('\n');
	a = au1;
}

void	ft_funx2(int a, int b)
{
	int	au1;

	au1 = a;
	while (a != 0)
	{
		if (a == au1)
			ft_putchar('C');
		else if (a > 1)
			ft_putchar('B');
		--a;
		if (a == 1 && b >= 1)
			ft_putchar('A');
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
	ft_funx(au1, au2);
	y = au2;
	if (y > 1)
	{
		while (y-- != 2)
		{
			if (x != 1 && x > 0)
				if (y <= au2 || y > 3)
					ft_putchar('B');
			while (x-- > 2)
			{
				ft_putchar(' ');
			}
			x = au1;
			ft_putchar('B');
			ft_putchar('\n');
		}
		y = au2;
		ft_funx2(au1, au2);
	}
}
