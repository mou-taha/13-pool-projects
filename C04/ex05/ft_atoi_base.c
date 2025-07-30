/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 23:59:49 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/30 23:59:51 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_char_twice(int length, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	base_length;

	base_length = 0;
	while (base[base_length])
	{
		if (base[base_length] == '+'
			|| base[base_length] == '-'
			|| base[base_length] == ' ')
			return (0);
		base_length++;
	}
	if (ft_is_char_twice(base_length, base) == 1)
		return (0);
	return (base_length);
}

int	ft_power(int nb, int power)
{
	if (power <= 0)
		return (1);
	return (nb * ft_power(nb, power - 1));
}

int	get_index(char *src, char to_find)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == to_find)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		symbol;
	int		base_length;
	int		nb;
	long	res;
	int		nb_length;

	base_length = check_base(base);
	if (base_length < 2)
		return (0);
	symbol = 1;
	i = 0;
	while (str[i] == ' '
		|| (str[i] >= 7 && str[i] <= 13)
		|| str[i] == '+'
		|| str[i] == '-')
	{
		if (str[i] == '-')
			symbol = -1;
		i++;
	}
	nb = 0;
	res = 0;
	nb_length = i;
	while (get_index(base, str[nb_length]) >= 0 && str[nb_length])
		nb_length++;
	while (str[i])
	{
		nb = get_index(base, str[i]);
		if (nb < 0)
			break ;
		nb = ft_power(base_length, nb_length - 1 - i) * nb;
		res = res + nb;
		i++;
	}
	return (res * symbol);
}
