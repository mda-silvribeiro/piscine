/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:39:25 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/13 20:03:02 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aux(char a)
{
	write(1, &a, 1);
}

void	hexa(unsigned char c)
{
	aux(92);
	aux("0123456789abcdef"[c / 16]);
	aux("0123456789abcdef"[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!(32 <= (*str) && (*str) <= 126))
		{
			hexa(*str);
		}
		else
		{
			write(1, str, 1);
		}
		++str;
	}
}
