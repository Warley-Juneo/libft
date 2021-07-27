#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*result;
	size_t	n;

	n = ft_strlen(str);
	result = (char *)str + n;
	while (n--)
	{
		if (*result == (char)c)
			return (result);
		result--;
	}
	if (*result == (char )c)
		return (result);
	return (NULL);
}
