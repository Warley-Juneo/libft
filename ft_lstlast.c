/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 03:42:41 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/10 21:28:42 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_element;
	t_list	*cpy_lst;

	cpy_lst = lst;
	while (cpy_lst)
	{
		last_element = cpy_lst;
		cpy_lst = cpy_lst->next;
	}
	return (last_element);
}
