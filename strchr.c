#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != c)
		str++;
	if(*str == c) 
		return ((char *)str);
	return (NULL);
}
