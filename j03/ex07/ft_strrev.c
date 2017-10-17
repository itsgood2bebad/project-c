
int			ft_strlen(char *str)
{
	int		c;

	c = 0;
	while (str[c])
	{
		c = c + 1;
	}
	return (c);
}

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	str1[ft_strlen(str)];

	i = 0;
	j = 0;
	while (str[j])
	{
		str1[j] = str[j];
		j++;
	}
	while (j >= 0)
	{
		j--;
		str[i] = str1[j];
		i++;
	}
	return (str);
}
