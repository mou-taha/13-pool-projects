#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = nb;
	if (nb < 0)
		return 0;
	else if (nb == 0)
		return (1);
	while (nb > 1)
		factorial = factorial * --nb;
	return (factorial);
}

int main(void)
{
	int res = ft_iterative_factorial(5);
	printf("factorial : %d\n", res);
}