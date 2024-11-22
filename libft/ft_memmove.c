/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarapkh <akarapkh@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:33:16 by akarapkh          #+#    #+#             */
/*   Updated: 2024/11/20 01:58:43 by akarapkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_mem;
	const unsigned char	*src_mem;

	dest_mem = dest;
	src_mem = src;
	if ((!dest && !src) || !n)
		return (dest);
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			dest_mem[i - 1] = src_mem[i - 1];
			i--;
		}
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		dest_mem[i] = src_mem[i];
		i++;
	}
	return (dest);
}
