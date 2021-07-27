#include "libft.h"
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substring_ptr;
	size_t 	i;

	i = 0;
	if (!s || start + len > ft_strlen(s))
	{
        substring_ptr = malloc(1);
		*substring_ptr = 0;
		return (substring_ptr);
	}
	substring_ptr = (char *)malloc(sizeof(char) * len + 1);
    if (!substring_ptr)
		return (NULL);
	//ft_strlcpy(substring_ptr, &s[start], len + 1);
	while (s[i] && i < len)
	 	substring_ptr[i++] = s[start++];
	substring_ptr[i] = '\0';
	return (substring_ptr);

}

/*
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t    srclen;

    if (!s)
        return (NULL);
    srclen = ft_strlen(s) + 1;
    if (start >= srclen)
        len = 0;
    else
        len += 1;
    if (srclen < len)
        str = (char *)malloc(srclen * sizeof(char));
    else
        str = (char *)malloc(len * sizeof(char));
    if (!str)
        return (NULL);
    ft_strlcpy(str, &s[start], len);
    return (str);
}
*/

/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	max_size;

	s_len = ft_strlen((char *)s);
	if (start < s_len)
		max_size = s_len - start;
	else
		max_size = 0;
	if (max_size > len)
		max_size = len;
	sub = malloc(sizeof(char) * (max_size + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, max_size + 1);
	return (sub);
}
*/