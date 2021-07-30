/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:48:23 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/07/29 15:48:24 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		result;
	int		i;
	int		sing;
	char	*s;

	result = 0;
	i = 0;
	s = (char *)str;
	sing = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sing *= -1;
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		result = (s[i] - '0') + (result * 10);
		i++;
	}
	return (result * sing);
}
