

int		ft_iterative_factorial(int nb)
{
	int c;

	c = nb;
	if ((nb > 1) && (nb < 13))
	{
		while (nb > 1)
		{
			c = c * (nb - 1);
			nb--;
		}
		return (c);
	}
	else if ((nb == 0) || (nb == 1))
	{
		return (1);
	}
	else
		return (0);
}
