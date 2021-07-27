#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	ptr = (unsigned char *)dest;
	ptr1 = (unsigned char *)src;
	if (ptr1 == 0)
		return (NULL);
	while (n--)
		*ptr++ = *ptr1++;
	return (dest);
}
