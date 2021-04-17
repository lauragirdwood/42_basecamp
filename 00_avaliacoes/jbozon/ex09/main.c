#include <stdio.h>
#include "ft_strcapitalize.c"

int        main(void)
{

    char string[] = "oi mundo";

    printf("\n*Before*\n");
    printf("The string is: %s\n", string);

    ft_strcapitalize(string);

    printf("\n*After*\n");
    printf("The string is: %s\n", string);
    
    return (0);
}