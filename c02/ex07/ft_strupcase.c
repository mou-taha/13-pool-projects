#include <unistd.h>

char *ft_strupcase(char *str)
{
    int counter;

    counter=0;
    while (str[counter])
    {
        if (str[counter] >= 'a' && str[counter] <= 'z')
        {
            str[counter] = str[counter] - ('a' - 'A'); 
        }
        counter++;
    }
    return str;
}


int main(void)
{
    char list[10]="aaaQ-p5";
    char *c=list;
    write(1,ft_strupcase(c), 6);
    return 0;
}