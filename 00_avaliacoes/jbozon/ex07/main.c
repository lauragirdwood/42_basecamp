#include <stdio.h>
#include "ft_strupcase.c"

int        main(void)
{

    char string[] = "alluppercase";

    printf("\n*Before*\n");
    printf("The string is: %s\n", string);

    ft_strupcase(string);

    printf("\n*After*\n");
    printf("The string is: %s\n", string);
    
    return (0);
}