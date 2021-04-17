#include <stdio.h>
#include "ft_strcpy.c"

int        main(void)
{
    char p_destination [] = "42 SP";
    char p_source[] = "Hello World!";

    printf("\n*Before*\n");
    printf("The source is: %s\n", p_source);
    printf("The destination is: %s\n", p_destination);

    ft_strcpy(p_destination, p_source);

    printf("\n*After*\n");
    printf("The destination is: %s\n", p_destination);

    return (0);
}