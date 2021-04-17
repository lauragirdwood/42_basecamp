#include <stdio.h>
#include "ft_strncpy.c"

int        main(void)
{
    char p_destination [] = "Oi";
    char p_source[] = "Hello World!";
    

    printf("\n*Before*\n");
    printf("The source is: %s\n", p_source);
    printf("The destination is: %s\n", p_destination);

    ft_strncpy(p_destination, p_source, 6);

    printf("\n*After*\n");
    printf("The destination is: %s\n", p_destination);

    return (0);
}