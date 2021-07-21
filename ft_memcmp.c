#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (*(char *)str1 < *(char *)str2)
		{
			return (-1);
		}
		else if (*(char *)str1 > *(char *)str2)
			return (1);
		else
		{
			str1++;
			str2++;
		}
	}
	return (0);
}
