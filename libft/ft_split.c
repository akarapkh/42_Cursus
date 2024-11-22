/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarapkh <akarapkh@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 08:21:29 by akarapkh          #+#    #+#             */
/*   Updated: 2024/11/22 02:05:03 by akarapkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *str, char charset)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == charset)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != charset)
				i++;
		}
	}
	return (count);
}

static char	*ft_strndup(const char *str, size_t len)
{
	size_t	i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static void	free_strs(char **strs)
{
	size_t	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static char	**extract_words(const char *s, char c, char **result)
{
	size_t	i;
	size_t	j;
	size_t	word_start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		word_start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > word_start)
		{
			result[j++] = ft_strndup(&s[word_start], i - word_start);
			if (!result[j - 1])
			{
				free_strs(result);
				return (NULL);
			}
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	if (!extract_words(s, c, result))
		return (NULL);
	return (result);
}
