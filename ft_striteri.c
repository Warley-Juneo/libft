#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	if (!s)
		return ;
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
}
