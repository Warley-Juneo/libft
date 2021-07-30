#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <limits.h>

#include "libft.h"

#define BHRED "\e[1;91m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define reset "\e[0m"

int main(void)
{

	////////////////////////////////
    //         ft_itoa            //
    ////////////////////////////////
	#ifdef ft_itoa

    if (strcmp(ft_itoa(INT_MIN), "-2147483648") == 0)
        printf(GRN "FT_ATOI:    [OK]" reset);
    else
        printf(RED "FT_ATOI:    [KO]" reset);

    if (strcmp(ft_itoa(INT_MAX), "2147483647") == 0)
        printf(GRN " [OK]" reset);
    else
        printf(RED " [KO]" reset);

    if (strcmp(ft_itoa(-2147483648LL), "-2147483648") == 0)
        printf(GRN " [OK]" reset);
    else
        printf(RED " [KO]" reset);

    if (strcmp(ft_itoa(9), "9") == 0)
        printf(GRN " [OK]" reset);
    else
        printf(RED " [KO]" reset);

    if (strcmp(ft_itoa(-9), "-9") == 0)
        printf(GRN " [OK]" reset);
    else
        printf(RED " [KO]" reset);

    if (strcmp(ft_itoa(10), "10") == 0)
        printf(GRN " [OK]" reset);
    else
        printf(RED " [KO]" reset);

    if (strcmp(ft_itoa(-10), "-10") == 0)
        printf(GRN " [OK]" reset);
    else
        printf(RED " [KO]" reset);

    if (strcmp(ft_itoa(-1), "-1") == 0)
        printf(GRN " [OK]" reset);
    else
        printf(RED " [KO]" reset);

    if (strcmp(ft_itoa(0), "0") == 0)
        printf(GRN " [OK]\n" reset);
    else
        printf(RED " [KO]\n" reset);

	#endif

    //visual debug
    // printf("\nRES:%s", ft_itoa(2147483647));
    // printf("\nRES:%s", ft_itoa(-2147483648));
	return (0);
}
