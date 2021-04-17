#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int        main(void)
{
	char p_source[] = "Hello World!";
    char p_destination [] = "42 SP";
	int num = 3;

    printf("\n*Before*\n");
    printf("The source is: %s\n", p_source);
    printf("The destination is: %s\n", p_destination);

    ft_strncpy(p_destination, p_source, num);

    printf("\n*After*\n");
    printf("The destination is: %s\n", p_destination);

    return (0);
}