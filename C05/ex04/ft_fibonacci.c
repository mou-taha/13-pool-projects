#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return -1;
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;
    int res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    return res;
}

int main(void)
{
    printf("result : %d", ft_fibonacci(2));
}