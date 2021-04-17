#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
    char empty [] = "";
	char only_space [] = " ";
	char lower_case_numbers [] = "\a";
	char upper_case_lower [] = "\b";
	char anything [] = "&$||";

	printf("The string empty is: %s\n", empty);
    printf("The result is: %d\n", ft_str_is_printable(empty));

    printf("The string only space is: %s\n", only_space);
    printf("The result is: %d\n", ft_str_is_printable(only_space));

	printf("The string alpha lower+numbers is: %s\n", lower_case_numbers);
    printf("The result is: %d\n", ft_str_is_printable(lower_case_numbers));

	printf("The string alpha upper lower is: %s\n", upper_case_lower);
    printf("The result is: %d\n", ft_str_is_printable(upper_case_lower));

	printf("The string anything: %s\n", anything);
    printf("The result is: %d\n", ft_str_is_printable(anything));

    return (0);
}