#include <stdio.h>

int ft_recursive_power(int nb,int power)
{
    if(power == 0)
        return 1;
    return nb * ft_recursive_power(nb, power - 1);
}

int main(void)
{
    printf("result : %d", ft_recursive_power(3, 10));
}