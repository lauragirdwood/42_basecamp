#include <stdio.h>
#include "ft_str_is_alpha.c"

int        main(void)
{
    char string1[] = "hdshdnjsfkfsnkck";
    char string2[] = "1284940402";
    char string3[] = "hdshs8888dnjsfkfsnkck";
    char string4[] = "";


    printf("\n*alpha*\n");
    printf("The string is: %d\n", ft_str_is_alpha(string1));

    printf("\n*num*\n");
    printf("The string is: %d\n", ft_str_is_alpha(string2));

    printf("\n*alphanum*\n");
    printf("The string is: %d\n", ft_str_is_alpha(string3));
    
    printf("\n*void*\n");
    printf("The string is: %d\n", ft_str_is_alpha(string4));

    return (0);
}