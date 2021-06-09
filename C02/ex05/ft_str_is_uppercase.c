/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:16:21 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/13 18:51:48 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int count;

	count = 0;
	if (str[count] == '\0')
	{
		return (1);
	}
	while (str[count] != '\0')
	{
		if (str[count] < 'A' || str[count] > 'Z')
		{
			return (0);
		}
		count++;
	}
	return (1);
}
