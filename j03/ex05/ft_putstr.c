
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int c;

	c = 0;
	while (*(str + c))
	{
		ft_putchar(*(str + c));
		c = c + 1;
	}
}
