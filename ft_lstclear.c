/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 03:47:24 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/10 22:07:25 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_element;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp_element = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp_element;
	}
	*lst = NULL;
}
