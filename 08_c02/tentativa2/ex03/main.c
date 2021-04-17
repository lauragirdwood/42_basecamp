#include <stdio.h>
#include <stdlib.h>

int ft_str_is_numeric(char *str);

int		main(void)
{
    char empty [] = "";
	char only_numbers [] = "012345";
	char lower_case_numbers [] = "123teste123";
	char upper_case_numbers [] = "TESTE123";
	char anything [] = "&$   ||";

	printf("The string empty is: %s\n", empty);
    printf("The result is: %d\n", ft_str_is_numeric(empty));

    printf("The string only numbers is: %s\n", only_numbers);
    printf("The result is: %d\n", ft_str_is_numeric(only_numbers));

	printf("The string alpha lower numbers is: %s\n", lower_case_numbers);
    printf("The result is: %d\n", ft_str_is_numeric(lower_case_numbers));

	printf("The string alpha upper numbers is: %s\n", upper_case_numbers);
    printf("The result is: %d\n", ft_str_is_numeric(upper_case_numbers));

	printf("The string anything: %s\n", anything);
    printf("The result is: %d\n", ft_str_is_numeric(anything));

    return (0);
}
