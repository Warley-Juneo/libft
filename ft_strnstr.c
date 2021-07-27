#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;

	len_little = ft_strlen(little);
	if (!len_little)
		return ((char *)big);
	while (*big && len_little <= len--)
	{
		if (!ft_memcmp(big, little, len_little))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
