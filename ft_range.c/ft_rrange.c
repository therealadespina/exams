#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *range;
	int i = 0;

	if (start > end)
		range = (int*)malloc(sizeof(int) * (start - end + 1));
	else
		range = (int*)malloc(sizeof(int) * (end - start + 1));
	while (start != end)
	{
		range[i++] = start;
		start += (start > end) ? -1 : 1;
	}
	range[i] = start;
	return range;
}

int   main(void)
{
	int* res;
	int i;

	res = ft_range(0, -3);

	for (i = 0; i < 4; i++)
		  printf("%d,", res[i]);
	printf("\n");
}
