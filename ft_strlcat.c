#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	result_len;

	dest_len = ft_strlen(dest);
	result_len = FT_MIN(dstsize, dest_len) + ft_strlen(src);
	if (dstsize > dest_len)
	{
		dest += dest_len;
		dstsize -= dest_len;
		while (*src && dstsize-- > 1)
			*dest++ = *src++;
		*dest = '\0';
	}
	return (result_len);
}
