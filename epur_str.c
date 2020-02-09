#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int match_spaces;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				match_spaces = 1;
			if (!(av[1][i] == ' ' || av[1][i] == '\t'))
			{
				if (match_spaces)
					write (1, " ", 1);
				match_spaces = 0;
				write (1, &av[1][i], 1);
			}
		i++;
		}
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
return 0;	
}
