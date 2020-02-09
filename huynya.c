#include <unistd.h>
#include <stdlib.h>

char match_memory(char *str)
{
	int i = 0;
	int j = 0;
	char *temp;

	if (!(str = (char*)malloc(sizeof(char*) * (str + 1))))
				return (0);
	while (str[i])
	{
		temp[i] = str[i];
		i++;	
	}
	if (temp[i] == temp[j])
		
	else
		temp[i] = temp[j];
		i++;
	return 0;
}

int main(int ac, **char av)
{
	int i = 0;

	if (ac < 1)
		write (1, "\n", 1);
	match_memory(av[i]);
	return 0;
}
