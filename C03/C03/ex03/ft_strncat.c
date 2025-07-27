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
char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;
	unsigned int	len;

	len = 0;
	counter = 0;
	while (dest[len])
		len++;
	while (src[counter] && counter < n)
	{
		dest[len + counter] = src[counter];
		counter++;
	}
	dest[len + counter] = '\0';
	return (dest);
}
