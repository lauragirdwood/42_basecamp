#include <stdio.h>
#include "ft_str_is_numeric.c"

int        main(void)
{
    char string1[] = "hdshdnjsfkfsnkck";
    char string2[] = "1284940402";
    char string3[] = "hdshs8888dnjsfkfsnkck";
    char string4[] = "";


    printf("\n*alpha*\n");
    printf("The string is: %d\n", ft_str_is_numeric(string1));

    printf("\n*num*\n");
    printf("The string is: %d\n", ft_str_is_numeric(string2));

    printf("\n*alphanum*\n");
    printf("The string is: %d\n", ft_str_is_numeric(string3));
    
    printf("\n*void*\n");
    printf("The string is: %d\n", ft_str_is_numeric(string4));

    return (0);
}