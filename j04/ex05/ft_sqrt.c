

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 1)
		return (0);
	while (nb > i * i)
		i++;
	if (nb == i * i)
		return (i);
	return (0);
}
