#include <stdio.h>

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

int main(void)
{
    printf("Test 1: %d\n", ft_str_is_uppercase("HELLO"));        // Expected: 1
    printf("Test 2: %d\n", ft_str_is_uppercase("Hello"));        // Expected: 0
    printf("Test 3: %d\n", ft_str_is_uppercase(""));             // Expected: 1 (empty string)
    printf("Test 4: %d\n", ft_str_is_uppercase("UPPERCASE"));    // Expected: 1
    printf("Test 5: %d\n", ft_str_is_uppercase("UPPER_CASE"));   // Expected: 0 (underscore)
    printf("Test 6: %d\n", ft_str_is_uppercase("UPPERCASE1"));   // Expected: 0 (digit)

    return 0;
}