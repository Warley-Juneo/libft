/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:49:40 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/07/29 15:49:41 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*result;
	size_t	n;

	n = ft_strlen(str);
	result = (char *)str + n;
	while (n--)
	{
		if (*result == (char)c)
			return (result);
		result--;
	}
	if (*result == (char )c)
		return (result);
	return (NULL);
}
