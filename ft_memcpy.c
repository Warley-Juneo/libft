/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:49:03 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/11 21:12:34 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	if ((!dest && !src) || !n)
		return (dest);
	ptr = (unsigned char *)dest;
	ptr1 = (unsigned char *)src;
	while (n--)
		*ptr++ = *ptr1++;
	return (dest);
}
