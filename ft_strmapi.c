#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	string = ft_strdup((char *)s);
	if (!string)
		return (ft_strdup(""));
	i = 0;
	while (i < s_len)
	{
		string[i] = f(i, s[i]);
		i++;
	}
	return (string);
}
