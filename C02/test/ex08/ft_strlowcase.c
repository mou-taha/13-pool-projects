#include <stdio.h>

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
    char str1[] = "HELLO WORLD!";
    char str2[] = "already lowercase";
    char str3[] = "";
    char str4[] = "1234!@#";

    printf("Test 1: %s\n", ft_strlowcase(str1)); // Expected: hello world!
    printf("Test 2: %s\n", ft_strlowcase(str2)); // Expected: already lowercase
    printf("Test 3: %s\n", ft_strlowcase(str3)); // Expected: (empty string)
    printf("Test 4: %s\n", ft_strlowcase(str4)); // Expected: 1234!@# (unchanged)

    return 0;
}