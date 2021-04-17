#include <unistd.h>

int		main(int argc, char *argv[])
{
	char *str;
	int i;
	int j;

	i = 1;
	while(i < argc)
	{
		j = 0;
		str = argv[i];
		while (str[j] !='\0')
		{
			write(1, &str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
