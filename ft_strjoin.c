/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 03:43:58 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/10 03:44:00 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;

	if (!s1 || !s2)
		return (NULL);
	new_string = (char *) ft_calloc((ft_strlen(s1)
				+ ft_strlen(s2) + 1), sizeof(char));
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&(new_string[ft_strlen(s1)]), s2, ft_strlen(s2) + 1);
	return (new_string);
}
