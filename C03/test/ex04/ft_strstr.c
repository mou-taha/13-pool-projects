#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    int counter;
    int j;
 
    if (to_find[0] == '\0') 
        return str;
    counter = 0;
    while (str[counter])
    {
        j=0;
        while (to_find[j] &&  str[counter+j] == to_find[j])
            j++;
        if (to_find[j]=='\0')
        {
            return &str[counter];
        }
        counter++; 
    }
    return (NULL);
}

void run_test(char *haystack, char *needle)
{
    char *result_std = strstr(haystack, needle);
    char *result_ft  = ft_strstr(haystack, needle);

    printf("str: \"%s\", to_find: \"%s\"\n", haystack, needle);
    printf("strstr   : %s\n", result_std ? result_std : "NULL");
    printf("ft_strstr: %s\n", result_ft  ? result_ft  : "NULL");

    if (result_std == result_ft || (result_std && result_ft && strcmp(result_std, result_ft) == 0))
        printf("✅ Match\n");
    else
        printf("❌ Mismatch\n");

    printf("--------------------------------------------------\n");
}


int main(void)
{
    run_test("hello world", "world");
    run_test("abcdef", "cd");
    run_test("abcdef", "gh");
    run_test("abcdef", "");
    run_test("", "abc");
    run_test("abcabc", "cab");
    run_test("abcabc", "abc");
    run_test("aaaaaa", "aa");
    run_test("abc", "abcd");
    run_test("abc", "c");

    return 0;
}