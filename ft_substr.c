/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:55:25 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/11 19:41:01 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_mim(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring_ptr;
	size_t	str_len;
	size_t	max_size;

	if (!s)
		return (NULL);
	str_len = ft_strlen((char *)s);
	if (start < str_len)
		max_size = ft_mim(ft_strlen(s + start), len);
	else
		return (ft_strdup(""));
	substring_ptr = ft_calloc(max_size + 1, sizeof(char));
	if (!substring_ptr)
		return (NULL);
	ft_strlcpy(substring_ptr, &s[start], max_size + 1);
	return (substring_ptr);
}
