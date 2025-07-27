/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:39:20 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/17 21:49:28 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negatif;
	char	positif;

	negatif = 'N';
	positif = 'P';
	if (n < 0)
		write(1, &negatif, 1);
	else
		write(1, &positif, 1);
}
