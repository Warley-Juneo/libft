/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 03:43:49 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/11 19:57:47 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t
	add_string(char const *s, char c)
{
	size_t	end;

	end = 0;
	while (s[end] && s[end] != c)
		end++;
	return (end);
}

static char	**free_malloc(char **result, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(result[i++]);
	free(result);
	return (NULL);
}

static size_t
	count_splits(char const *s, char c)
{
	size_t	i;
	size_t	splits;

	splits = 0;
	i = 0;
	while (*s && *s == c)
		s++;
	while (s[i])
	{
		if (!i)
			splits++;
		else if (s[i - 1] == c && s[i] != c)
			splits++;
		i++;
	}
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	splits;
	size_t	i;
	size_t	end;

	if (!s)
		return (NULL);
	splits = count_splits(s, c);
	result = malloc(sizeof(char *) * (splits + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < splits)
	{
		while (*s && *s == c)
			s++;
		end = add_string(s, c);
		result[i] = ft_substr(s, 0, end);
		if (!result[i])
			return (free_malloc(result, i));
		s += end + 1;
		i++;
	}
	result[splits] = NULL;
	return (result);
}
