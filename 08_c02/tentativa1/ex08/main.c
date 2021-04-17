#include <stdio.h>
#include <stdlib.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char source[] = "HelLOO WWorld!123";
	char to_lower0[] = "SAHDUFUASddaAFEAD";
	char to_lower1[] = "adsiEAFEASDFAD0-=+[]asdifAFeajafielIJIHHIJ";


	printf("The string is: %s\n", source);
	printf("The string is: %s\n", to_lower0);
	printf("The string is: %s\n", to_lower1);

	ft_strlowcase(source);
	ft_strlowcase(to_lower0);
	ft_strlowcase(to_lower1);

	printf("The string lower is: %s\n", source);
	printf("The string lower is: %s\n", to_lower0);
	printf("The string lower is: %s\n", to_lower1);

	return (0);
}