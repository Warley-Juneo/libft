/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 03:45:24 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/10 03:45:25 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	t_list	*lst;
	t_list	*add_front;

	lst = ft_lstnew("cafe");
	add_front = ft_lstnew("cha");
	ft_lstadd_front(&lst, add_front);

	printf("%s", lst->content);
}
