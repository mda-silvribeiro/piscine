/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:18:31 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/13 18:54:20 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 126)
		{
			return (0);
		}
		count++;
	}
	return (1);
}
