#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char source[] = "helloooo";
	char destiny[] = "hell";

	printf("The string is: %s\n", source);
	printf("The string is: %s\n", destiny);

	printf("strcmp do C = %d\n", strcmp(source, destiny));

	printf("strcmp da Laura = %d\n", ft_strcmp(source, destiny));
}
