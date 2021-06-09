/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:22:30 by mda-silv          #+#    #+#             */
/*   Updated: 2021/01/15 10:12:03 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	aux_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\r' ||
			c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int positive;
	int result;
	int count;

	positive = 1;
	count = 0;
	result = 0;
	while (aux_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*(str++) == '-')
			positive *= -1;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			result *= 10;
			result += (*(str++) - '0');
		}
		else
			return (result * positive);
	}
	return (result * positive);
}
