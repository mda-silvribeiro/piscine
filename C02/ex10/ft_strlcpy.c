/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:36:49 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/13 19:11:48 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (src[count])
		count++;
	if (size == 0)
		return (count);
	count = 0;
	while (src[count] && count < size - 1)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	count = 0;
	while (src[count])
		count++;
	return (count);
}
