#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;

	if (!s1 || !s2)
		return (NULL);
	new_string = (char *) ft_calloc((ft_strlen(s1)
					+ ft_strlen(s2) + 1), sizeof(char));
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&(new_string[ft_strlen(s1)]), s2, ft_strlen(s2) + 1);
	return (new_string);
}
