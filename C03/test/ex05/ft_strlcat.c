/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:13:56 by tmousnia          #+#    #+#             */
/*   Updaied: 2025/07/22 18:22:37 by tmousnia         ###   ########.fr       */
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