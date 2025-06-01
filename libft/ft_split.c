/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:32:30 by maabdulr          #+#    #+#             */
/*   Updated: 2025/05/04 20:07:19 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wcount(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*cpword(const char *s, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc(len + 1);
	i = 0;
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

void	free_result(char **result, size_t i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	i;
	size_t	len;

	i = 0;
	result = malloc((wcount(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			result[i] = cpword(s, len);
			if (!result[i++])
				return (free_result(result, i - 1), NULL);
			s += len;
		}
		else
			s++;
	}
	return (result[i] = NULL, result);
}


