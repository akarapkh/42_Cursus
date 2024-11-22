/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarapkh <akarapkh@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 05:12:47 by akarapkh          #+#    #+#             */
/*   Updated: 2024/11/15 05:45:53 by akarapkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ss;

	ss = s;
	while (n > 0)
	{
		if (*ss == (unsigned char)c)
			return ((void *)ss);
		ss++;
		n--;
	}
	return (NULL);
}
