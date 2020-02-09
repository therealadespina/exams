#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

char ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

char *ft_strdup(char *str)
{
	int 	i = -1;
	char	*copy;

	if (!(copy = (char*)malloc(sizeof(char*) * (ft_strlen(str) + 1))))
		return NULL;
	while (str[++i])
		copy[i] = str[i];
	copy[i] = '\0';
		return (copy);
}

int main(void)
{
	char *str = "Hello";
	char *result = ft_strdup(str);
	return(0);
}
