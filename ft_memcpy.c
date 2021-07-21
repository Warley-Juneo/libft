#include "libft.h"

void *ft_memcpy(void *dest, const void * src, size_t n)
{
	size_t	count;

	count = 0;
	while (src && count < n)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		count++;
	}
	*(char *)dest = '\0';
	return (dest);
}
