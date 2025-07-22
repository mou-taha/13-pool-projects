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

#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int dest_len = 0;
    int src_len = 0;
    int counter = 0;

    // Find the length of dest, but do not read past size
    while (dest_len < size && dest[dest_len])
        dest_len++;

    // Full src length, even if we can't copy it all
    while (src[src_len])
        src_len++;

    // If dest_len >= size, return size + src_len (no space to append)
    if (dest_len == size)
        return size + src_len;

    // Copy as much as fits
    while (src[counter] && (dest_len + counter + 1 < size)) {
        dest[dest_len + counter] = src[counter];
        counter++;
    }

    // Null-terminate
    if (dest_len + counter < size)
        dest[dest_len + counter] = '\0';

    return dest_len + src_len;
}


int main(int argc,char *argv[])
{
	char *dest=argv[1];
	char *res=ft_strcat(dest,argv[2]);
	printf("result: %s\n",res);
	return (0);
}
