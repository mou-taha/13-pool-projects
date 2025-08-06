#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *ptr;
    int start;
    int i;

    if (min >= max)
        return (NULL);
    start = min;
    ptr = malloc(sizeof(int) * (max - min));
    if (ptr == NULL)
        return (NULL);
    i = 0;
    while (start < max)
    {
        ptr[i] = start++;
        i++;
    }
    return (ptr);
}

int main()
{
    int i = 0;
    int min = 1;
    int max = 10;
    int *res = ft_range(min, max);
  
    
     free(res);
}