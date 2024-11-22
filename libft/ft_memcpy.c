/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarapkh <akarapkh@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 02:42:22 by akarapkh          #+#    #+#             */
/*   Updated: 2024/11/17 14:09:02 by akarapkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_mem;
	const unsigned char	*src_mem;

	i = 0;
	dest_mem = dest;
	src_mem = src;
	if (!dest && !src)
		return (NULL);
	return (ft_memmove(dest, src, n));
}
