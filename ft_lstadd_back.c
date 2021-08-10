#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (!lst || !new)
		return ;
	if (lst == NULL)
		*lst = new;
	else
	{
		back = ft_lstlast(*lst);
		back->next = new;
	}
}

s1 = "Abacate"; s1->next = s2;
s2 = "Chocolate"; s2->next = s3;
s3 ="Alicate";

last_element = "Alicate"; last_element->next = s4;
s4 = "Espeto";
