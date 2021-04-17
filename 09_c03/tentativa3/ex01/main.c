#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char	s1_teste[] = "01342345rfdrg";
	char	s2_teste[] = "01122345aaaaaaa";

	printf("função da laura: %d\n", ft_strncmp(s1_teste, s2_teste, 3));
	printf("função do C: %d\n", strncmp(s1_teste, s2_teste, 3));

	return (0);
}