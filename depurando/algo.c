#include <stdio.h>

int        ft_str_is_alpha(char *str);
char    *ft_strlowcase(char *str);
char    *ft_strupcase(char *str);
int        ft_str_is_alphanum(char *str);

char    *ft_strcapitalize(char *str)
{
    int    i;

    i = 0;
    while (*str)
    {
        if (ft_str_is_alpha(str))
            ft_strlowcase(str);
        str++;
    }
    i = 0;
    if (ft_str_is_alpha(&str[i]))
    {
        ft_strupcase(&str[i]);
        i++;
    }
    printf("verificação 2: %s\n", str);
    while (str[i] != '\0')
    {
        if (ft_str_is_alphanum(&str[i]) && !(ft_str_is_alphanum(&str[i - 1])))
            ft_strupcase(&str[i]);
        i++;
    }
    printf("verificação 3: %s\n", str);
    return (str);
}

int    ft_str_is_alpha(char *str)
{
        if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
            return (0);
    return (1);
}

char    *ft_strlowcase(char *str)
{
    int    c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] >= 'A' && str[c] <= 'Z')
            str[c] = str[c] + 32;
        c++;
    }
    return (str);
}

char    *ft_strupcase(char *str)
{
    int    c;

    c = 0;
    while (str[c] != '\0')
    {
        if (str[c] >= 'a' && str[c] <= 'z')
            str[c] = str[c] - 32;
        c++;
    }
    return (str);
}

int    ft_str_is_alphanum(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(ft_str_is_alpha(&str[i])) && (str[i] < '0' || str[i] > '9'))
            return (0);
        i++;
    }
    return (1);
}

char    *ft_strcapitalize(char *str);

int    main(void)
{
    char str1[] = "alo mAluco 42Beleza!";
//    char str2[] = "ALO MALUCO 42BELEZA!";
//    char str3[] = "alo+ma|uco a2beleza!";
//    char str4[] = "ALO+MALUCO*a2BELEZA!";
//    char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
//    char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";

    ft_strcapitalize(str1);
	printf("verificação 1: %s\n", str1);
//    printf("str2: %s\n", str2);
//    ft_strcapitalize(str2);
//    printf("str2_c: %s\n", str2);
//    printf("str3: %s\n", str3);
//    ft_strcapitalize(str3);
//    printf("str3_c: %s\n", str3);
//    printf("str4: %s\n", str4);
//    ft_strcapitalize(str4);
//    printf("str4_c: %s\n", str4);
//    printf("str5: %s\n", str5);
//    ft_strcapitalize(str5);
//    printf("str5_c: %s\n", str5);
//    printf("str6: %s\n", str6);
//    ft_strcapitalize(str6);
//    printf("str6_c: %s\n", str6);
    return (0);
}
