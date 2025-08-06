/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:38:15 by tmousnia          #+#    #+#             */
/*   Updated: 2025/08/04 20:38:25 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	start;

	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (range[0] == NULL)
	{
		return (-1);
	}
	i = 0;
	start = min;
	while (start < max)
	{
		range[0][i] = start;
		start++;
		i++;
	}
	return (i);
}
