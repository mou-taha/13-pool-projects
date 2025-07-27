#include <stdio.h>

char *ft_strncpy(char *dest,char *src,unsigned int n)
{
    unsigned int counter=0;
    while (counter<n && src[counter] != '\0')
    {
        dest[counter]=src[counter];
        counter++;
    }
    while (counter < n)
    {
        dest[counter] = '\0';
        counter++;
    }
    return (dest);
}

int main(void)
{
    char dest[20];

    // Test 1: src longer than n
    ft_strncpy(dest, "Hello, world!", 5);
    printf("Test 1: %.5s\n", dest);  // Output: Hello

    // Test 2: src shorter than n
    ft_strncpy(dest, "Hi", 5);
    printf("Test 2: %s\n", dest);    // Output: Hi (with null padding)

    // Test 3: n = 0 (nothing copied)
    ft_strncpy(dest, "Hello", 0);
    printf("Test 3: %s\n", dest);    // Output: (previous content or empty)

    // Test 4: exact length copy
    ft_strncpy(dest, "Test", 4);
    printf("Test 4: %s\n", dest);    // Output: Test

    // Test 5: Copy empty string
    ft_strncpy(dest, "", 5);
    printf("Test 5: %s\n", dest);    // Output: (empty string)

    return 0;
}