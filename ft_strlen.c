#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
