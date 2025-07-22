/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:40:56 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/21 18:41:02 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	len;

	len = 0;
	counter = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[counter] != '\0')
	{
		dest[len++] = src[counter++];
	}
	dest[len] = '\0';
	return (dest);
}
int main() {
    char expected[50];
    char *result;
    int i;

    // Test 1: Normal concat
    char test1[50] = "Hello, ";
    result = ft_strcat(test1, "World!");
    for (i = 0; test1[i] == "Hello, World!"[i] && test1[i] != '\0'; i++);
    printf("Test 1: %s => %s\n", result, (test1[i] == '\0' && "Hello, World!"[i] == '\0') ? "PASS" : "FAIL");

    // Test 2: Empty src
    char test2[50] = "Hello";
    result = ft_strcat(test2, "");
    for (i = 0; test2[i] == "Hello"[i] && test2[i] != '\0'; i++);
    printf("Test 2: %s => %s\n", result, (test2[i] == '\0' && "Hello"[i] == '\0') ? "PASS" : "FAIL");

    // Test 3: Empty dest
    char test3[50] = "";
    result = ft_strcat(test3, "World");
    for (i = 0; test3[i] == "World"[i] && test3[i] != '\0'; i++);
    printf("Test 3: %s => %s\n", result, (test3[i] == '\0' && "World"[i] == '\0') ? "PASS" : "FAIL");

    // Test 4: Both empty
    char test4[10] = "";
    result = ft_strcat(test4, "");
    printf("Test 4: '%s' => %s\n", result, (test4[0] == '\0') ? "PASS" : "FAIL");

    // Test 5: Special characters
    char test5[50] = "Path: ";
    result = ft_strcat(test5, "/usr/bin\n");
    for (i = 0; test5[i] == "Path: /usr/bin\n"[i] && test5[i] != '\0'; i++);
    printf("Test 5: %s => %s", result, (test5[i] == '\0' && "Path: /usr/bin\n"[i] == '\0') ? "PASS\n" : "FAIL\n");

    // Test 6: Multiple concatenations
    char test6[50] = "Start";
    ft_strcat(test6, " +");
    result = ft_strcat(test6, " End");
    for (i = 0; test6[i] == "Start + End"[i] && test6[i] != '\0'; i++);
    printf("Test 6: %s => %s\n", result, (test6[i] == '\0' && "Start + End"[i] == '\0') ? "PASS" : "FAIL");

    // Test 7: UTF-8-like content
    char test7[50] = "Café ";
    result = ft_strcat(test7, "au lait");
    for (i = 0; test7[i] == "Café au lait"[i] && test7[i] != '\0'; i++);
    printf("Test 7: %s => %s\n", result, (test7[i] == '\0' && "Café au lait"[i] == '\0') ? "PASS" : "FAIL");

    return 0;
}