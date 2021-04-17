#include <stdio.h>
#include <stdlib.h>

char *ft_strcapitalize(char *str);

int		main(void)
{
	char source[] = "sALUt, comment&tu vas";
	char to_lower0[] = "quarante,deux";
	char to_lower1[] = "cinquante%et+un";

	printf("The string is: %s\n", source);
	printf("The string is: %s\n", to_lower0);
	printf("The string is: %s\n", to_lower1);

	ft_strcapitalize(source);
	ft_strcapitalize(to_lower0);
	ft_strcapitalize(to_lower1);

	printf("The string lower is: %s\n", source);
	printf("The string lower is: %s\n", to_lower0);
	printf("The string lower is: %s\n", to_lower1);

	return (0);
}