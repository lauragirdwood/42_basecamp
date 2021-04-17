#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
    char empty [] = "";
	char only_lower [] = "testezineo";
	char lower_case_numbers [] = "teste123";
	char upper_case_lower [] = "testeTESTE";
	char anything [] = "&$   ||";

	printf("The string empty is: %s\n", empty);
    printf("The result is: %d\n", ft_str_is_lowercase(empty));

    printf("The string only lower is: %s\n", only_lower);
    printf("The result is: %d\n", ft_str_is_lowercase(only_lower));

	printf("The string alpha lower+numbers is: %s\n", lower_case_numbers);
    printf("The result is: %d\n", ft_str_is_lowercase(lower_case_numbers));

	printf("The string alpha upper lower is: %s\n", upper_case_lower);
    printf("The result is: %d\n", ft_str_is_lowercase(upper_case_lower));

	printf("The string anything: %s\n", anything);
    printf("The result is: %d\n", ft_str_is_lowercase(anything));

    return (0);
}