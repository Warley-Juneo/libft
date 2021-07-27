#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	void	*string1;

	string1 = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (string1);
}
