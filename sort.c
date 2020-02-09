#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int temp;
	
	int j;
	int k;

	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int tab[] = { -1, 6, 7, 3, -6, 7, 2, 4, 5, 2147483647, -2147483648 };
	unsigned int size = 11;
	
	sort_int_tab(tab, size);
	unsigned int i = 0;
	while (i < size)
	{
		printf("element %d: %d\n", i, tab[i]);
		i++;
	}
		return 0;
}
