
void	ft_putstr(char *str);

int		main(void)
{
	char string[] = "Hello world!";
	char *pstr;

	pstr = string; // os dois sao ponteiros
	ft_putstr(pstr);

	return 0;
}

/*
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}


void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}
*/