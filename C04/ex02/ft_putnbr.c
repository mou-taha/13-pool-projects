/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:28:12 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/30 20:28:14 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	buffer[11];
	int		i;
	long	n;

	i = 0;
	n = nb;
	if (nb == 0)
		write(1, "0", 1);
	i = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	while (n > 0)
	{
		buffer[i] = '0' + (n % 10);
		n = n / 10;
		i++;
	}
	while (buffer[--i])
		write(1, &buffer[i], 1);
}
