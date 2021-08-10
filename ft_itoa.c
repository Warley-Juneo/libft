/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 03:43:15 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/10 03:43:16 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	ft_count_digit(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count + 1);
}

static int
	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static void
	ft_rev(char *str)
{
	size_t	length;
	size_t	i;
	char	tmp;

	length = ft_strlen(str) - 1;
	i = 0;
	while (str[i] && i < length)
	{
		tmp = str[i];
		str[i] = str[length];
		str[length] = tmp;
		i++;
		length--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	count;
	size_t	is_neg;
	size_t	count_digit;

	count_digit = ft_count_digit(n);
	is_neg = (n < 0);
	if (n == 0)
		return (ft_strdup("0"));
	str = ft_calloc(count_digit + is_neg, sizeof(char));
	if (!str)
		return (NULL);
	count = 0;
	while (n != 0)
	{
		str[count++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[count] = '-';
	ft_rev(str);
	return (str);
}
