
void	ft_putstr(char *str);

int		main(void)
{
	char string[] = "Hello world!";
	char *pstr;

	pstr = string; // os dois sao ponteiros
	ft_putstr(pstr);

	return 0;
}