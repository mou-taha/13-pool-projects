#include <stdio.h>

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
    char str1[] = "Hello World!";
    char str2[] = "already UPPERCASE";
    char str3[] = "";
    char str4[] = "1234!@#";

    printf("Test 1: %s\n", ft_strupcase(str1)); // Expected: HELLO WORLD!
    printf("Test 2: %s\n", ft_strupcase(str2)); // Expected: ALREADY UPPERCASE
    printf("Test 3: %s\n", ft_strupcase(str3)); // Expected: (empty string)
    printf("Test 4: %s\n", ft_strupcase(str4)); // Expected: 1234!@# (unchanged)

    return 0;
}