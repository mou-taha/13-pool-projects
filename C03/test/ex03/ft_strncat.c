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


unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	counter;

	dest_len = 0;
	src_len = 0;
	counter = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len == size)
		return (size + src_len);
	while (src[counter] && (dest_len + counter + 1 < size))
	{
		dest[dest_len + counter] = src[counter];
		counter++;
	}
	if (dest_len + counter < size)
		dest[dest_len + counter] = '\0';
	return (dest_len + src_len);
}

int 	main(void)
{
	char destination[14] = "Hello, ";
	char source[] = "world!";
	size_t size = sizeof(destination);
	size_t result = ft_strlcat(destination, source, 14);

    if (result >= size)
	{
        	printf("Destination buffer too short. Required size: %zu\n", result);
    } else 
	{
        	printf("Concatenated string: %s\n", destination);
        	printf("Total length (including null terminator): %zu\n", result);
    	}
    return 0;
}

