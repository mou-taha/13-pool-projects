/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:38:50 by tmousnia          #+#    #+#             */
/*   Updated: 2025/08/04 20:38:54 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*ptr;

	size = 0;
	while (src[size])
		size++;
	ptr = malloc((size * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	size = 0;
	while (src[size])
	{
		ptr[size] = src[size];
		size++;
	}
	ptr[size] = '\0';
	return (ptr);
}
