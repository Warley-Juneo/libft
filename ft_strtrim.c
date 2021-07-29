/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:24:32 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/07/28 21:17:44 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_search_char_start(const char *str, const char *set)
{
	int	search;

	search = 0;
	while (str[search] && ft_strchr(set, str[search]))
		search++;
	return (search);
}

static int	ft_search_char_last(const char *str, const char *set)
{
	size_t	end;

	end = ft_strlen(str);
	while (end && ft_strchr(set, str[end]))
		end--;
	return (end + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	size_t	last;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	start = ft_search_char_start(s1, set);
	last = ft_search_char_last(&s1[start], set);
	result = ft_substr(s1, start, last);
	return (result);
}
