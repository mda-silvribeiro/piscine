/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:33:56 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/13 17:39:04 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[count])
	{
		if (str[count] == to_find[count2])
		{
			while (str[count + count2] == to_find[count2])
			{
				count2++;
				if (!to_find[count2])
				{
					return (&str[count]);
				}
			}
		}
		count++;
	}
	return (0);
}
