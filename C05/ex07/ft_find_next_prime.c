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

int ft_find_next_prime(int nb)
{
    if(nb <= 2)
        return 2;
    while (!ft_is_prime(nb))
        nb++;
    return nb;
}


int main(void)
{
    for (int i = 0; i <= 100; i++)
    {
        printf("%2d ---next prime----> %d\n", i, ft_find_next_prime(i));
    }
    return 0;
}