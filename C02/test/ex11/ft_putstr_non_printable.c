/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:55:14 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/25 22:59:16 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_hex(char c)
{
	char	t;
	int 	nb;
	char	buff[4];
	int		i;

	i=0;
	if (c < 10)
	{
		t = '0' + c;
	}
	else if (c < 16)
	{
		t = ('A' + (c - 10)) + 32 ;
	}
	else if (c > 15)
	{
		nb = c - 0 ;
		while (nb >15)
		{
			buff[i++] = nb % 16;
			nb = nb / 16;
		}
		write(1, "\\1", 2);
		t = ('A' + (buff[0]  - 10)) + 32 ;
		write(1,& t, 1);
		return;
	}
	write(1, "\\", 1);
	write(1, "0", 1);
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

int main(void)
{
	// char buffer[5] = {};
	// char hex [16]= "0123456789ACDEF";
	// buffer[0] = hex[10];
	ft_putstr_non_printable("\x1F");
}
