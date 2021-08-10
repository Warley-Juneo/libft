#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list	*lst;
	t_list	*add_front;

	lst = ft_lstnew("cafe");
	add_front = ft_lstnew("cha");
	ft_lstadd_front(&lst, add_front);

	printf("%s", lst->content);
}
