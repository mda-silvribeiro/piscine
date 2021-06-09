/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:05:24 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/13 18:50:10 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int count;

	count = 0;
	if (str[count] == '\0')
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if (str[count] < '0' || str[count] > '9')
		{
			return (0);
		}
		count++;
	}
	return (1);
}
