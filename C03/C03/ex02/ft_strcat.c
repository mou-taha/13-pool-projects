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
char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	counter;

	len_dest = 0;
	counter = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[counter])
	{
		dest[len_dest + counter] = src[counter];
		counter++;
	}
	dest[len_dest + counter] = '\0';
	return (dest);
}
