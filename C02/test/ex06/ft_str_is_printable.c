#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int counter = 0;

    if (str[counter] == '\0')
        return 1;

    while (str[counter])
    {
        if (str[counter] < 32 || str[counter] > 126)
            return 0;
        counter++;
    }
    return 1;
}

int main(void)
{
    printf("Test 1: %d\n", ft_str_is_printable("Hello,\\ world!"));   // Expected: 1
    printf("Test 2: %d\n", ft_str_is_printable("Hello\nWorld"));    // Expected: 0 (newline is not printable)
    printf("Test 3: %d\n", ft_str_is_printable(" "));               // Expected: 1 (space)
    printf("Test 4: %d\n", ft_str_is_printable(""));                // Expected: 1 (empty string)
    printf("Test 5: %d\n", ft_str_is_printable("\tTab"));           // Expected: 0 (tab is non-printable)
    printf("Test 6: %d\n", ft_str_is_printable("Printable123!@#~")); // Expected: 1

    return 0;
}