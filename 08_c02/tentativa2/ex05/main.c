#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
    char empty [] = "";
	char only_upper [] = "TESTE";
	char lower_case_numbers [] = "teste123";
	char upper_case_lower [] = "TESTEteste";
	char anything [] = "&$   ||";

	printf("The string empty is: %s\n", empty);
    printf("The result is: %d\n", ft_str_is_uppercase(empty));

    printf("The string only upper is: %s\n", only_upper);
    printf("The result is: %d\n", ft_str_is_uppercase(only_upper));

	printf("The string alpha lower+numbers is: %s\n", lower_case_numbers);
    printf("The result is: %d\n", ft_str_is_uppercase(lower_case_numbers));

	printf("The string alpha upper lower is: %s\n", upper_case_lower);
    printf("The result is: %d\n", ft_str_is_uppercase(upper_case_lower));

	printf("The string anything: %s\n", anything);
    printf("The result is: %d\n", ft_str_is_uppercase(anything));

    return (0);
}