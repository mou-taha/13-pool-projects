#include <unistd.h>

char *ft_strlowcase(char *str)
{
    int counter;

    counter=0;
    while (str[counter])
    {
        if (str[counter] >= 'A' && str[counter] <= 'Z')
        {
            str[counter] = str[counter] + ('a' - 'A'); 
        }
        counter++;
    }
    
    return str;
}


int main(void)
{
    char list[10]="ABCDEFsss-s";
    char *c=list;
    write(1,ft_strlowcase(c), 10);
    return 0;
}