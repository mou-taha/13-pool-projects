#include <stdio.h>

int ft_iterative_power(int nb,int power)
{
    int base = nb;
    while (--power>0)
        nb *= base;
    return nb;
}

int main(void)
{
    printf("result : %d", ft_iterative_power(3, 10));
}