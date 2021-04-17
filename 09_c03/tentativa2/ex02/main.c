#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int		main(void)
{
	char	dest_teste[2] = "oi ";
	char	src_teste[] = "tudo bem";
	
	//printf("C: %s\n", strcat(dest_teste, src_teste));

	printf("laura: %s", ft_strcat(dest_teste, src_teste));

	return (0);
}