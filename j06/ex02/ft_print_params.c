

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int i;
	int j;

	(void)ac;
	i = 0;
	j = 1;
	while (av[j])
	{
		while (av[j][i])
		{
			ft_putchar(av[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 0;
	}
	return (0);
}
