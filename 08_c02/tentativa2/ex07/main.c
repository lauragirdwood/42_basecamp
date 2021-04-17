#include <stdio.h>
#include <stdlib.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char source[] = "Hello World!123";
	char to_upper0[] = "aBbasdsadfSDAFasdf";
	char to_upper1[] = "aice!3$fasdFEDad";

	printf("The string is: %s\n", source);

	ft_strupcase(source);
	ft_strupcase(to_upper0);
	ft_strupcase(to_upper1);

	printf("The string upper is: %s\n", source);
	printf("The string upper is: %s\n", to_upper0);
	printf("The string upper is: %s\n", to_upper1);

	return (0);
}
