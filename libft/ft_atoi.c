/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarapkh <akarapkh@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:52:13 by akarapkh          #+#    #+#             */
/*   Updated: 2024/11/17 15:49:48 by akarapkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	return_lim(int sign)
{
	if (sign == 1)
		return (LONG_MAX);
	return (LONG_MIN);
}

static long int	ft_atol(const char *nptr)
{
	size_t		i;
	int			sign;
	long int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + (nptr[i] - '0');
		if (res < 0)
			return (return_lim(sign));
		i++;
	}
	return (res * sign);
}

int	ft_atoi(const char *nptr)
{
	return (ft_atol(nptr));
}
