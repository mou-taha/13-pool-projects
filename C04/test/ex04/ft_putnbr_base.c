/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:50:53 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/24 19:22:16 by tmousnia         ###   ########.fr       */
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
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_get_base(char *base)
{
	int	nb_base;

	nb_base = 0;
	while (base[nb_base])
	{
		if (base[nb_base] == '+' || base[nb_base] == '-')
			return (-1);
		nb_base++;
	}
	if (ft_is_char_twice(nb_base, base) == -1)
		return (-1);
	return (nb_base);
}

void	ft_init_buffer(char *buffer, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		buffer[i] = 0;
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	buffer[34];
	int		nb_base;	
	int		i;
	int		rem;
	
	nb_base = 0;
	i = 0;
	rem = 0;
	nb_base = ft_get_base(base);
	ft_init_buffer(buffer, 34);
	if (nb_base <= 1)
		return ;
	if (nbr<0)
	{
		write(1, "-", 1);
		nbr = - nbr;
	}
	while (nbr > 0)
	{
		rem = nbr % nb_base;
		nbr = nbr / nb_base;
		if (rem < 10)
			buffer[i] = rem + '0';
		else
			buffer[i] = rem + '7';
		i++;
	}
	while (i >= 0)
		write(1, &buffer[i--], 1);
}

int	main(void)
{
	ft_putnbr_base(31, "0123456789ABCDEF");
	return (0);
}
