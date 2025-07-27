#include <stdio.h>

int ft_iterative_power(int nb,int power)
{
    int base = nb;
    while (--power>0)
        nb *= base;
    return nb;
}

int ft_sqrt(int nb)
{
    int power = 1;
    int root = 1;
    
    while (power <= nb)
    {
        power = ft_iterative_power(root, 2);
        if (power == nb)
            return root;
        root++;
    }
    return 0;
}


int main(void)
{
    printf("resulr: %d\n",ft_sqrt(-25));
}