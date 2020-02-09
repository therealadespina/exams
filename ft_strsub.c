#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	
	char *temp;
	int i = 0;
	int j = 0;

	if (!(temp = (char*)malloc(sizeof(char*) * (len + 1))))
		return (NULL);
	while (start + j < start + len)
		temp[i++] = s[start + j++];
	temp[i] = '\0';
		return (temp);
}
		
int main(int ac, char **av)
{
	char *str = "ABCDEFGYPPPPASDSDPASDPSPAPFPA";
	char *res;
	
	res = ft_strsub(str, 4, 5);
	printf("%s", res);
}

*/


char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *temp;
	int res = 0;
	int a = 0;
	int b = 0;

	if (!(temp = (char*)malloc(sizeof(char*) * (len + 1))))
			return (NULL);
	res = start + len;
	while (start < res)
	{	
		temp[a] = s[start];
			a++;
		start++;
	}
	temp[a] = '\0';
		return (temp);
}


int main(int ac, char **av)
{
	char *str = "0123456789ABC";
	char *res;

	res = ft_strsub(str, 4, 5);
	printf("%s", res);
}
