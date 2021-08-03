#include "libft.h"

char	ft_mapi_uppercase (unsigned int i, char str)
{
	if (str >= 97 && str <= 122)
		str = str - i;
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	string = (char *) ft_calloc(sizeof(char *), s_len + 2);
	if (!string)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		string[i] = f(32, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}

