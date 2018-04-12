int		ft_atoi(const char *str)
{
	int val;
	int i;
	int pn;

	val = 0;
	i = 0;
	pn = 1;

	while(str[i] <= 32)
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			pn = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		val = (val * 10) + (str[i] - '0');
		i++;
	}
	return (val * pn);
}
