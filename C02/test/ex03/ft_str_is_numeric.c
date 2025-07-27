#include <stdio.h>

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

int main(void)
{
    printf("Test 1: %d\n", ft_str_is_numeric("1234567890"));  // Expected: 1
    printf("Test 2: %d\n", ft_str_is_numeric("123abc456"));   // Expected: 0
    printf("Test 3: %d\n", ft_str_is_numeric(""));            // Expected: 1 (empty string)
    printf("Test 4: %d\n", ft_str_is_numeric("00000"));       // Expected: 1
    printf("Test 5: %d\n", ft_str_is_numeric("12 34"));       // Expected: 0 (space)
    printf("Test 6: %d\n", ft_str_is_numeric("9876\n"));      // Expected: 0 (newline)

    return 0;
}