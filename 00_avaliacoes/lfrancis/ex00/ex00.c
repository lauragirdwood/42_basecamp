#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int        main(void)
{
    char origem[] = "inicial";
    char destino[] = "alterado";
    char *dest;

    printf("Origem: %s\n", origem);
    printf("Destino: %s\n", destino);
    dest = ft_strcpy(origem, destino);
    printf("Origem: %s\n", origem);
    return (0);
}
