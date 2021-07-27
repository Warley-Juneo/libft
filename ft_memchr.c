#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)str;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
