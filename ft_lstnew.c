#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *) malloc(sizeof(t_list));
	if(!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
