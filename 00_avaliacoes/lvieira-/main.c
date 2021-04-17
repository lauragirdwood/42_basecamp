#include <unistd.h>

void	aff_p(char *str)
{
	int i = 0;
	while (*str != '\0')
	{
		if (*str == 'p')
		{
			write(1, &*str, 1);
			write(1, "\n", 1);
			i++;
			break;
		}
		str++;
	}
	
	if (i == 0)
	{
		write(1, "v", 1);
		write(1, "\n", 1);
	}

}

int		main(void)
{
	char i[] = "aparecida";
	char *ptr;

	ptr = i;
	aff_p(ptr);
	return (0);
}