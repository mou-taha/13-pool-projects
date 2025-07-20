#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int counter=0;
    while (src[counter])
    {
        dest[counter]=src[counter];
        counter++;
    }
    return (dest);
}

int main(void)
{
    char arr[]="hello world!";
    char new[12];
    char *result =ft_strcpy(new,arr);
    write(1, result,12);
    write(1, result,12);
    return (0);
}