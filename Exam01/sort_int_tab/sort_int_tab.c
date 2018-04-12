void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < size)
	{
		while(j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
