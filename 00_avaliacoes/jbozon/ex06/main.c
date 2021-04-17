#include <stdio.h>
#include "ft_str_is_printable.c"

int        main(void)
{
    char string1[] = "hdshdnjsfkfsnkck";
    char string2[] = "HSDNKCKSIOAOA";
    char string3[] = "hdshs8888dnjsfkfsnkck";
    char string4[] = "1284940402";
    char string5[] = "\0";
    char string6[] = "äü5skæ";
    char string7[] = "";


    printf("\n*alpha_min*\n");
    printf("The string is: %d\n", ft_str_is_printable(string1));

    printf("\n*alpha_max*\n");
    printf("The string is: %d\n", ft_str_is_printable(string2));

    printf("\n*alpha_num*\n");
    printf("The string is: %d\n", ft_str_is_printable(string3));
    
    printf("\n*num*\n");
    printf("The string is: %d\n", ft_str_is_printable(string4));

    printf("\n*only_not_printable*\n");
    printf("The string is: %d\n", ft_str_is_printable(string5));

    printf("\n*not_and_printable*\n");
    printf("The string is: %d\n", ft_str_is_printable(string6));

    printf("\n*void*\n");
    printf("The string is: %d\n", ft_str_is_printable(string7));

    return (0);
}