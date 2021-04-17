#include <stdio.h>
#include "ft_str_is_lowercase.c"

int        main(void)
{
    char string1[] = "hdshdnjsfkfsnkck";
    char string2[] = "HSDNKCKSIOAOA";
    char string3[] = "hdshs8888dnjsfkfsnkck";
    char string4[] = "1284940402";
    char string5[] = "";


    printf("\n*alpha_min*\n");
    printf("The string is: %d\n", ft_str_is_lowercase(string1));

    printf("\n*alpha_max*\n");
    printf("The string is: %d\n", ft_str_is_lowercase(string2));

    printf("\n*alpha_num*\n");
    printf("The string is: %d\n", ft_str_is_lowercase(string3));
    
    printf("\n*num*\n");
    printf("The string is: %d\n", ft_str_is_lowercase(string4));

    printf("\n*void*\n");
    printf("The string is: %d\n", ft_str_is_lowercase(string5));

    return (0);
}