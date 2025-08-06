/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:15:54 by tmousnia          #+#    #+#             */
/*   Updated: 2025/08/02 15:15:55 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	put_args(char *args[])
{
	int	i;
	int	j;

	i = 1;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			write(1, &args[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return ;
}

void	sort(int size, char *strs[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (strs[i] && i <= size - 1)
	{
		j = 1;
		while (strs[i + j])
		{
			if (ft_strcmp(strs[i], strs[i + j]) > 0)
			{
				tmp = strs[i];
				strs[i] = strs[i + j];
				strs[i + j] = tmp;
			}
			j++;
		}
		i++;
	}
	put_args(strs);
}

int	main(int argc, char *argv[])
{
	sort(argc, argv);
	return (0);
}
