/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 03:43:55 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/10 03:43:56 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	if (!s)
		return ;
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
}
