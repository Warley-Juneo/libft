#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	count;
	char	*string;

	count = 0;
	string = (char *)str;
	while (*string && count < n)
	{
		if (*string == c)
			return (string);
		string++;
	}
	return (string);
}
