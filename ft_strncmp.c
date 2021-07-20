#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	size_t count;
	count = 1;
		while (count <= n)
		{
			*(char *)str = c; 
			str++;
			count++;
		}
}
