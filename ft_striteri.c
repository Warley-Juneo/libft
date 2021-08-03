#include "libft.h"
#include <stdio.h>


void	ft_mapi_lowercase (unsigned int i, char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90 && *str)
		{
			*str = *str + i;
			str++;
		}
		else
		{
			str++;
		}
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	s_len;

	s_len = ft_strlen(s);
	f(32, s);
	printf("%s", s);
}
