#include <unistd.h>

char *ft_strncpy(char *dest,char *src,unsigned int n)
{
    unsigned int counter=0;
    while (counter<n)
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
    ft_strncpy(new,arr,11);
    new[12]='\0';
    write(1, new,12);
    return (0);
}