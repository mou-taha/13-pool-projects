#include <stdio.h>


char *ft_strcapitalize(char *str)
{
    int counter = 0;

    while (str[counter])
    {
        if ((str[counter] >= 'A' && str[counter] <= 'Z') || (str[counter] >= 'a' && str[counter] <= 'z'))
        {
            if (counter == 0 || !((str[counter - 1] >= 'A' && str[counter - 1] <= 'Z') ||
                                  (str[counter - 1] >= 'a' && str[counter - 1] <= 'z') ||
                                  (str[counter - 1] >= '0' && str[counter - 1] <= '9')))
            {
                if (str[counter] >= 'a' && str[counter] <= 'z')
                    str[counter] = str[counter] - ('a' - 'A');
            }
            else
            {
                if (str[counter] >= 'A' && str[counter] <= 'Z')
                    str[counter] = str[counter] + ('a' - 'A');
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
    char s7[] = "isTheAnswer To-Everything";
    char s8[] = "";
    char s9[] = "ALL-CAPS-STRING";
    char s10[] = "this\tis\na test!";
    char s11[] = "hi, how aRe you? 42words forty-two; fifty+and+one";

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
    printf("11: %s\n", ft_strcapitalize(s11));

    return 0;
}