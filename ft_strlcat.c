/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 03:44:02 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/10 03:44:03 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	result_len;

	dest_len = ft_strlen(dest);
	result_len = ft_min(dstsize, dest_len) + ft_strlen(src);
	if (dstsize > dest_len)
	{
		dest += dest_len;
		dstsize -= dest_len;
		while (*src && dstsize-- > 1)
			*dest++ = *src++;
		*dest = '\0';
	}
	return (result_len);
}
