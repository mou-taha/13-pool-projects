/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 21:53:41 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/25 21:55:05 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	src_len;

	src_len = 0;
	counter = 0;
	while (src[src_len])
		src_len++;
	if (size > 0)
	{
		while (counter < size - 1 && src[counter] != '\0')
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	return (src_len);
}
