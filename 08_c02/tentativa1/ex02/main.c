#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
    char empty [] = "";
	char lower_case [] = "teste";
	char lower_case_numbers [] = "teste123";
	char upper_case [] = "TESTE";
	char upper_case_numbers [] = "TESTE123";
	char anything [] = "&$   ||";

	printf("The string empty is: %s\n", empty);
    printf("The result is: %d\n", ft_str_is_alpha(empty));

    printf("The string alpha lowercase is: %s\n", lower_case);
    printf("The result is: %d\n", ft_str_is_alpha(lower_case));

	printf("The string alpha lower numbers is: %s\n", lower_case_numbers);
    printf("The result is: %d\n", ft_str_is_alpha(lower_case_numbers));

	printf("The string alpha uppercase is: %s\n", upper_case);
    printf("The result is: %d\n", ft_str_is_alpha(upper_case));

	printf("The string alpha upper numbers is: %s\n", upper_case_numbers);
    printf("The result is: %d\n", ft_str_is_alpha(upper_case_numbers));

	printf("The string anything: %s\n", anything);
    printf("The result is: %d\n", ft_str_is_alpha(anything));

    return (0);
}
