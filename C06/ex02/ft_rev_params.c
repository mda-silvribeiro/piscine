/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:07:00 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/18 14:38:52 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_aux(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int count;

	count = argc - 1;
	while (count)
	{
		write(1, argv[count], ft_aux(argv[count]));
		write(1, "\n", 1);
		count--;
	}
	return (0);
}
