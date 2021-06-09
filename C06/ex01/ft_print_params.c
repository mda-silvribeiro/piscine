/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 13:26:49 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/18 14:24:36 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_aux(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int count;

	count = 1;
	while (count < argc)
	{
		write(1, argv[count], ft_aux(argv[count]));
		write(1, "\n", 1);
		count++;
	}
	return (0);
}
