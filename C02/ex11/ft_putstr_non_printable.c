/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:55:14 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/26 14:48:03 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_hex(char c)
{
	int		i;
	int		nb;
	char	t;
	char	buff[4];

	i = 0;
	if (c < 10)
		t = '0' + c;
	else if (c < 16)
		t = ('A' + (c - 10)) + 32 ;
	else if (c > 15)
	{
		nb = c - 0 ;
		while (nb > 15)
		{
			buff[i++] = nb % 16;
			nb = nb / 16;
		}
		write(1, "\\1", 2);
		t = ('A' + (buff[0] - 10)) + 32 ;
		write(1, &t, 1);
		return ;
	}
	write(1, "\\0", 2);
	write(1, &t, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int			i;
	char		c;

	i = 0;
	c = ' ';
	while (str[i])
	{
		c = str[i];
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, &str[i], 1);
		else
		{
			put_hex(str[i]);
		}
		i++;
	}
}
