#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int	counter = 0;

	while (s1[counter] && s2[counter])
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	return (s1[counter] - s2[counter]);
}


int main(void)
{
    printf("Compare \"abc\" and \"abc\" => %d\n", strcmp("abc", "abc"));     // 0
    printf("Compare \"abc\" and \"abd\" => %d\n", strcmp("abc", "abd"));     // 'c' - 'd' = -1
    printf("Compare \"abcd\" and \"abc\" => %d\n", strcmp("abcd", "abc"));   // 'd' - '\0' = 100
    printf("Compare \"abc\" and \"abcd\" => %d\n", strcmp("abc", "abcd"));   // '\0' - 'd' = -100
    printf("Compare \"42\" and \"21\" => %d\n", strcmp("42", "21"));         // '4' - '2' = 2
    return 0;
}
