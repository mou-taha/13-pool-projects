#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int counter;

    counter=0;
    if(str[counter]=='\0')
    {
        return 1;
    }
    while (str[counter])
    {
        if(str[counter] < 'a' || str[counter] > 'z')
        {
            return 0;
        }
        counter++;
    }
    return 1;
}

int main(void)
{
    printf("Test 1: %d\n", ft_str_is_lowercase("hello"));       // Expected: 1
    printf("Test 2: %d\n", ft_str_is_lowercase("Hello"));       // Expected: 0
    printf("Test 3: %d\n", ft_str_is_lowercase(""));            // Expected: 1 (empty string)
    printf("Test 4: %d\n", ft_str_is_lowercase("lowercase"));   // Expected: 1
    printf("Test 5: %d\n", ft_str_is_lowercase("lower_case"));  // Expected: 0 (underscore)
    printf("Test 6: %d\n", ft_str_is_lowercase("lowercase1"));  // Expected: 0 (digit)

    return 0;
}