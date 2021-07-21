#include "libft.h"

int	ft_toupper (int c)
{
	if (c >= 98 && c <= 122)
		return (c - 32);
	return (c);
}
