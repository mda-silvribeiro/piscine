/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:40:04 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/20 17:47:12 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_change(char **s1, char **s2)
{
	char *aux;

	aux = *s1;
	*s1 = *s2;
	*s2 = aux;
}

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] && s2[count] && s1[count] == s2[count])
		count++;
	return (s1[count] - s2[count]);
}

int		main(int argc, char **argv)
{
	int count;
	int aux;

	count = 1;
	while (count++ < argc)
	{
		aux = 1;
		while (aux < argc - 1)
		{
			if (ft_strcmp(argv[aux], argv[aux + 1]) > 0)
				ft_change(&argv[aux], &argv[aux + 1]);
			aux++;
		}
	}
	count = 1;
	while (count < argc)
	{
		ft_str(argv[count++]);
		write(1, "\n", 1);
	}
}
