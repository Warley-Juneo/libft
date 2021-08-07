/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:48:36 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/06 18:10:20 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*result;

	if (nelem * size > 2147483647)
		return (NULL);
	result = malloc(nelem * size);
	if (result == NULL)
		return (NULL);
	ft_memset(result, 0, nelem * size);
	return (result);
}
