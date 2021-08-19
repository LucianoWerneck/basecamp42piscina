int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont])
	{
		cont++;
	}
	return (cont);
}
