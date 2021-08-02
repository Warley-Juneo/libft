#include "libft.h"

static void
	ft_rev(char *str)
{
	size_t	length;
	size_t	i;
	char	tmp;

	length = ft_strlen(str) - 1;
	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i] && i < length)
	{
		tmp = str[i];
		str[i] = str[length];
		str[length] = tmp;
		i++;
		length--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	count;

	if (n == 0)
		return (ft_strdup(""));
	str = ft_calloc(sizeof(*str), 11);
	if (!str)
		return (NULL);
	count = 0;
	while (n != 0)
	{
		if (n < 0)
		{
			str[count++] = '-';
			n *= -1;
		}
		str[count++] = '0' + n % 10;
		n = n / 10;
	}
	ft_rev(str);
	return (str);
}
