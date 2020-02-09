#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;

	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
		ft_putchar('\n');
	}
return 0;
}
