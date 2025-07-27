#include <stdio.h>

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

int main(void)
{
    printf("Test 1: %d\n", ft_str_is_alpha("HelloWorld"));     // Expected: 1
    printf("Test 2: %d\n", ft_str_is_alpha("Hello123"));       // Expected: 0
    printf("Test 3: %d\n", ft_str_is_alpha(""));               // Expected: 1 (empty string)
    printf("Test 4: %d\n", ft_str_is_alpha("Test_with_underscore")); // Expected: 0
    printf("Test 5: %d\n", ft_str_is_alpha("ALLCAPS"));        // Expected: 1
    printf("Test 6: %d\n", ft_str_is_alpha("lowercase"));      // Expected: 1
    printf("Test 7: %d\n", ft_str_is_alpha("Space here"));     // Expected: 0

    return 0;
}