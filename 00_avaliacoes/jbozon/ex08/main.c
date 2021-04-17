#include <stdio.h>
#include "ft_strlowcase.c"

int        main(void)
{

    char string[] = "ALLLOWERCASE";

    printf("\n*Before*\n");
    printf("The string is: %s\n", string);

    ft_strlowcase(string);

    printf("\n*After*\n");
    printf("The string is: %s\n", string);
    
    return (0);
}