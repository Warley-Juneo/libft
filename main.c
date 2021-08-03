#include "libft.h"
#include <stdio.h>

int main (void)
{
	char	**resultados;
	int		i;

	resultados = ft_split("Acabate", 'a');
	i = 0;
	while(resultados[i])
	{
		printf("%s\n", resultados[i]);
		i++;
	}
}
