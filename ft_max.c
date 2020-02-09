int ft_max(int *tab, int len)
{
	int i = 0;
	int max;

	max = tab[i];

	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return max;
}
