#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *ptr;
    int start;

    if (min >= max)
        return (NULL);
    start = min;
    ptr = malloc(sizeof(int) * (max - min));
    if (ptr == NULL)
        return (NULL);
    while (start < max)
    {
        *ptr = start++;
        ptr++;
    }
    ptr -= (max - min);
    return (ptr);
}

int main()
{
    int *res = ft_range(2, 6);
    int i = 0;
    while (i < 6 - 2)
    {
        printf("%d", res[i++]);
    }
    free(res);

}