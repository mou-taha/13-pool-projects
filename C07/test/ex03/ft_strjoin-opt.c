/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin-opt.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:05:19 by tmousnia          #+#    #+#             */
/*   Updated: 2025/08/04 20:05:21 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	get_size_toalloc(int size, int sep_length, char **strs)
{
	int	i;
	int	j;
	int	str_length;

	i = 0;
	str_length = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			str_length++;
		}
		i++;
	}
	return ((str_length + ((sep_length * size)
				- sep_length) + 1) * sizeof(char));
}

void	sjoin(char *res, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	f;

	i = 0;
	j = 0;
	f = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[f++] = strs[i][j++];
		j = 0;
		if (i != size - 1)
			while (sep[j])
				res[f++] = sep[j++];
		i++;
	}
	res[f] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_length;
	char	*res;
	int		i;
	int		j;
	int		f;

	f = 0;
	sep_length = 0;
	if (size == 0 || strs == NULL)
	{
		res = malloc(1);
		res[0] = '\0';
	}
	else
	{
		while (sep[sep_length])
			sep_length++;
		res = malloc(get_size_toalloc(size, sep_length, strs));
		sjoin(res, size, strs, sep);
	}
	return (res);
}


int main()
{
    // Test Case 1: Standard case
    printf("--- Test Case 1: Standard case ---\n");
    char *strs1[] = {"hello", "world", "42"};
    char *result1 = ft_strjoin(3, strs1, " - ");
    printf("Expected: 'hello - world - 42'\n");
    printf("Result: '%s'\n\n", result1);
    free(result1); // Don't forget to free the allocated memory

    // Test Case 2: Single string
    printf("--- Test Case 2: Single string ---\n");
    char *strs2[] = {"single"};
    char *result2 = ft_strjoin(1, strs2, "---");
    printf("Expected: 'single'\n");
    printf("Result: '%s'\n\n", result2);
    free(result2);

    // Test Case 3: Empty separator
    printf("--- Test Case 3: Empty separator ---\n");
    char *strs3[] = {"ab", "cd"};
    char *result3 = ft_strjoin(2, strs3, "");
    printf("Expected: 'abcd'\n");
    printf("Result: '%s'\n\n", result3);
    free(result3);

    // Test Case 4: Empty strings in array
    printf("--- Test Case 4: Empty strings in array ---\n");
    char *strs4[] = {"", "test", ""};
    char *result4 = ft_strjoin(3, strs4, ",");
    printf("Expected: ',test,'\n");
    printf("Result: '%s'\n\n", result4);
    free(result4);

    // Test Case 5: Empty array of strings
    // Note: The provided function has a bug here. It returns an uninitialized pointer.
    // A robust function should return an empty string or NULL.
    printf("--- Test Case 5: Empty array of strings ---\n");
    char **strs5 = NULL; // Or any valid char**
    char *result5 = ft_strjoin(0, strs5, "---");
    printf("Expected: (A valid empty string or NULL)\n");
    printf("Result: '%s'\n\n", result5);
    // free(result5); // This would crash due to the function's bug

    return 0;
}