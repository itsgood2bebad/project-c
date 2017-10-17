
int		ft_iterative_power(int nb, int power)
{
	int i;
	int a;

	i = 0;
	a = nb;
	if (power == 0)
		return (1);
	while (++i < power)
		a = a * nb;
	return (a);
}
