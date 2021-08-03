#include "libft.h"
#include <stdio.h>

static size_t
	count_splits(char *s, char c)
{
	size_t	splits;

	splits = 0;
	while(*s)
	{
		if(*s == c)
		{
			s++;
			splits++;
		}
		s++;
	}
	return (splits);
}

static size_t
	count_string(char *s, char c)
{
	size_t	count;

	count = 0;
	while(*s)
	{
		if(*s && *s != c)
		{
			s++;
			count++;
		}
		else
			return (count + 1);
	}
	return (count + 1);
}

char **ft_split(char const *s, char c)
{
	char	**result;
	size_t	t_malloc;
	size_t	i;
	char	*cpy_s;

	t_malloc = count_splits((char *)s, c);
	result = ft_calloc(sizeof(char *), (ft_strlen(s) - t_malloc + 1));
	if(!result)
		return (NULL);
	i = 0;
	cpy_s = (char *)s;
	while (t_malloc + 1 > 0)
	{
		result[i] = ft_calloc(sizeof(char *), count_string(cpy_s, c));
		ft_strlcpy(result[i], cpy_s, count_string(cpy_s, c));
		cpy_s = cpy_s + count_string(cpy_s, c);
		i++;
		t_malloc--;
	}
	result[i] = NULL;
	return (result);
}
