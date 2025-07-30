/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:37:01 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/30 20:37:05 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

int	ft_get_base_init_buffer(char *base, int size, char *buffer)
{
	int	nb_base;
	int	i;

	nb_base = 0;
	while (base[nb_base])
	{
		if (base[nb_base] == '+' || base[nb_base] == '-')
			return (0);
		nb_base++;
	}
	i = 0;
	while (i < size)
	{
		buffer[i] = 0;
		i++;
	}
	return (nb_base);
}

void	write_base(int size, char *buffer)
{
	while (size >= 0)
		write(1, &buffer[size--], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	buffer[34];
	int		nb_base;
	int		i;
	long	n;

	i = 0;
	n = nbr;
	nb_base = ft_get_base_init_buffer(base, 34, buffer);
	if (nb_base >= 2 && !ft_is_char_twice(nb_base, base))
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n == 0)
			write(1, "0", 1);
		while (n > 0)
		{
			buffer[i++] = base[n % nb_base];
			n = n / nb_base;
		}
		write_base(i, buffer);
	}
}
