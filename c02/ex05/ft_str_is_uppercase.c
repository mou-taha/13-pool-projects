#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    int counter;

    counter=0;
    if(str[counter]=='\0')
    {
        return 1;
    }
    while (str[counter])
    {
        if(str[counter] < 'A' || str[counter] > 'Z')
        {
            return 0;
        }
        counter++;
    }
    return 1;
}

int main(int argc,char *argv[])
{
    char c= ft_str_is_uppercase(argv[1])+'0';
    write(1, &c, 1);
}