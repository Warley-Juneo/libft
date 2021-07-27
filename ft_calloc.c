#include "libft.h"
#include <stdlib.h>

void 	*ft_calloc(size_t nelem, size_t size)
{
	void	*result;

	if (nelem * size > 2147483647)
		return (NULL);
	result = malloc(nelem * size);
	if (result == NULL)
		return (NULL);
	ft_memset(result, 0, nelem * size);
	return (result);
}
