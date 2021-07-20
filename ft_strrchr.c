#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*result;

	result = (char *)str + ft_strlen(str);
	while (result >= str)
	{
		if (*result == c)
			return (result);
		result--;
	}
	return (NULL);
}
