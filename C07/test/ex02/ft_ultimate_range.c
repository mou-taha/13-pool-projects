#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int	start;

	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (range[0] == NULL)
	{
		return (-1);
	}
	i = 0;
	start = min;
	while (start < max)
	{
		range[0][i] = start;
		start++;
		i++;
	}
	return (i);
}

int main(void)
{
	int min = 2;
	int max = 8;
	int inz = 0;
	int *p  = &inz;
	int **ptrnb = &p;
	int i=0;

	int count = ft_ultimate_range(ptrnb, min, max);
	printf("count = %d\n", count);
	while (i < count)
	{
		printf("%d\n",ptrnb[0][i]);
		i++;
	}
	return(1);
}