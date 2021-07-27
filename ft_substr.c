#include "libft.h"

static size_t	ft_mim(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substring_ptr;
	size_t 	str_len;
	size_t	max_size;

	str_len = ft_strlen((char *)s);
	if (start < str_len)
		max_size = ft_mim(ft_strlen(s + start), len);
	else
		return(ft_strdup(""));
	substring_ptr = ft_calloc(max_size + 1, sizeof(char));
	if (!substring_ptr)
		return (NULL);
	if (start < str_len)
		ft_strlcpy(substring_ptr, &s[start], max_size + 1);
	return (substring_ptr);

}
