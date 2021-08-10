#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	free(lst);
	del(lst);
}
