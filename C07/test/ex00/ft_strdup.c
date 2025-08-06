#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int size;
    char *ptr;

    size = 0;
    while (src[size])
        size++;
    ptr = malloc((size * sizeof(char)) + 1);
    if (ptr == NULL)
        return (NULL);
    size = 0;
    while (src[size])
    {
        ptr[size] = src[size];
        size++;
    }
    ptr[size] = '\0';
    return (ptr);
}

int main(void)
{
    char *ptr = ft_strdup("");
    printf("res : %s\n",ptr);
    free(ptr);
}