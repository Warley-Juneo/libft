#include "libft.h"
#include <stdio.h>

t_list *ft_lstlast(t_list *lst)
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
