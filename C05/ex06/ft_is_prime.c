#include <stdio.h>


int ft_is_prime(int nb)
{
    int i;
    if (nb == 2)
        return 1;
    if ((nb % 2) == 0 || nb == 0 || nb == 1)
        return 0;
    i = 3;
    while (i * i <= nb)
    {
        if (nb % i == 0)
			return 0;
		i += 2;
    }
    return 1;
}

int main(void)
{
    for (int i = 0; i <= 30; i++)
    {
        printf("%2d -> %s\n", i, ft_is_prime(i) ? "prime" : "not prime");
    }
    return 0;
}