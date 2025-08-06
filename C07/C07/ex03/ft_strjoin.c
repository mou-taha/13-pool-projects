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
