#include <stdio.h>

char *ft_strupcase(char *str)
{
    int counter;

    counter = 0;
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

char *ft_strlowcase(char *str)
{
    int counter;

    counter = 0;
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

char *ft_strcapitalize(char *str)
{
    int counter;
    char previous_char;
    char temp;
    
    counter = 0;
    while (str[counter])
    {
        if ((str[counter] >= 'A' && str[counter] <= 'Z') || (str[counter] >= 'a' && str[counter] <= 'z'))
        {
            previous_char = str[counter - 1];
            if (!(previous_char >= 'A' && previous_char <= 'Z') && !(previous_char >= 'a' && previous_char <= 'z') && 
            !(previous_char >= '0' && previous_char <= '9') || counter==0)
            {
                temp = str[counter];
                str[counter] = *ft_strupcase(&temp);
            }
            else
            {
                temp = str[counter];
                str[counter] = *ft_strlowcase(&temp);
            }
        }
        counter++;
    }
    return str;
}

int main(void)
{
    char s1[] = "hello world";
    char s2[] = "123abc DEF";
    char s3[] = "sPeCiAL*ch@r$ AND-Words";
    char s4[] = "    spaces     before and after  ";
    char s5[] = "UPPERCASE lowercase MiXeD";
    char s6[] = "éclair brûlée! déjà-vu?";
    char s7[] = "42isTheAnswer To-Everything";
    char s8[] = "";
    char s9[] = "ALL-CAPS-STRING";
    char s10[] = "this\tis\na test!";

    printf("1: %s\n", ft_strcapitalize(s1));
    printf("2: %s\n", ft_strcapitalize(s2));
    printf("3: %s\n", ft_strcapitalize(s3));
    printf("4: %s\n", ft_strcapitalize(s4));
    printf("5: %s\n", ft_strcapitalize(s5));
    printf("6: %s\n", ft_strcapitalize(s6));
    printf("7: %s\n", ft_strcapitalize(s7));
    printf("8: %s\n", ft_strcapitalize(s8));
    printf("9: %s\n", ft_strcapitalize(s9));
    printf("10: %s\n", ft_strcapitalize(s10));

    return 0;
}