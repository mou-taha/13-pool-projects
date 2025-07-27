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
				return (0);
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
			return (0);
		nb_base++;
	}
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
	long	n;
	
	nb_base = 0;
	i = 0;
	n = nbr;
	if ( !(nb_base = ft_get_base(base)) || nb_base < 2 || !ft_is_char_twice(nb_base, base))
		return ;
	ft_init_buffer(buffer, 34);
	if (n<0)
	{
		write(1, "-", 1);
		n = - n;
	}
	if(n == 0)
		write(1, "0", 1);
	while (n > 0)
	{
		buffer[i] = base[n % nb_base];
		n = n / nb_base;
		i++;
	}
	while (i >= 0)
		write(1, &buffer[i--], 1);
}

int	main(void)
{
	ft_putnbr_base(55269, "0"); 
	return (0);
}
