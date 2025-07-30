/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:13:40 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/26 15:13:42 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	counter;
	int	j;

	counter = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[counter])
	{
		j = 0;
		while (to_find[j] && str[counter + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[counter]);
		counter++;
	}
	return (NULL);
}
