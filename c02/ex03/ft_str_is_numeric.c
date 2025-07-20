#include <unistd.h>

int ft_str_is_numeric(char *str)
{
    int counter;

    counter=0;
    if(str[counter]=='\0')
    {
        return 1;
    }
    while (str[counter])
    {
        if(str[counter] < '0' || str[counter] > '9')
        {
            return 0;
        }
        counter++;
    }
    return 1;
}

int main(int argc,char *argv[])
{
    char c= ft_str_is_numeric(argv[1])+'0';
    write(1, &c, 1);
}