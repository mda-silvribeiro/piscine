/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:17:51 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/13 17:21:26 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] && s2[count] && s1[count] == s2[count])
	{
		++count;
	}
	if (s1[count] == s2[count])
	{
		return (0);
	}
	else
	{
		return (s1[count] - s2[count]);
	}
}
