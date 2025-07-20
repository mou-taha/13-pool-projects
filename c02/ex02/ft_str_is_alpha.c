#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int counter;

    counter=0;
    if(str[counter]=='\0')
    {
        return 1;
    }
    while (str[counter])
    {
       if (!((str[counter] >= 'A' && str[counter] <= 'Z') ||
              (str[counter] >= 'a' && str[counter] <= 'z')))
        {
            return 0;
        }
        counter++;
    }
    return 1;
}

int main()
{
    char c = ft_str_is_alpha("")+'0';
    write(1, &c, 1);
}