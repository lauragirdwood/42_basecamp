void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		ft_putchar(nb);
	}
}
