/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:53:31 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/21 22:53:43 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}


int main(void)
{
    char dest1[100];
    char dest2[100];
    char dest3[100];
    char dest4[100];
    char dest5[100];
    char dest6[] = "overlap";

    // Test 1: Normal string
    ft_strcpy(dest1, "Hello, world!");
    printf("Test 1: %s\n", dest1);

    // Test 2: Empty string
    ft_strcpy(dest2, "");
    printf("Test 2: %s\n", dest2);

    // Test 3: Single character
    ft_strcpy(dest3, "A");
    printf("Test 3: %s\n", dest3);

    // Test 4: Long string
    ft_strcpy(dest4, "This is a long string used to test copying functionality.");
    printf("Test 4: %s\n", dest4);

    // Test 5: dest and src are the same (copy to self)
    ft_strcpy(dest5, "Copy to self");
    ft_strcpy(dest5, dest5);
    printf("Test 5: %s\n", dest5);

    // Test 6: dest is smaller than src (dangerous - no buffer overflow protection)
    // This will overflow, but let's just see what happens (not recommended in production)
    char small_dest[5];
    ft_strcpy(small_dest, "Too long");
    printf("Test 6: %s\n", small_dest);

    // Test 7: Overlapping memory (undefined behavior)
    // Copy from dest7 start to dest7+2 (overlapping regions)
    // Warning: This is undefined behavior and can crash or print garbage
    printf("Before Test 7: %s\n", dest6);
    ft_strcpy(dest6 + 2, dest6);
    printf("After Test 7: %s\n", dest6);

    return 0;
}
