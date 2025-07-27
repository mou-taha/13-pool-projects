#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int counter;

    if (n == 0)
        return 0;
    counter = 0;
	while (s1[counter] && s2[counter] && counter < n-1)
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	return (s1[counter] - s2[counter]);
}

int main(void)
{
    printf("Test 1: %d\n", strncmp("apple", "apricot", 2));  // ➜ 0
    printf("Test 2: %d\n", strncmp("apple", "apricot", 3));  // ➜ 'p' - 'r' = -2
    printf("Test 3: %d\n", strncmp("test", "test", 5));      // ➜ 0
    printf("Test 4: %d\n", strncmp("abc", "abcd", 10));      // ➜ 0 - 'd' = -100
    printf("Test 5: %d\n", strncmp("abcd", "abc", 10));      // ➜ 'd' - 0 = 100
    printf("Test 6: %d\n", strncmp("abc", "abc", 0));        // ➜ 0
    return 0;
}
