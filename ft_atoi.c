#include "libft.h"

int	ft_atoi(const char *str)
{
	int		result;
	int		i;
	int		sing;
	char	*s;

	result = 0;
	i = 0;
	s = (char *)str;
	sing = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sing *= -1;
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		result = (s[i] - '0') + (result * 10);
		i++;
	}
	return (result * sing);
}
