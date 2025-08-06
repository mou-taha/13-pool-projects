/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:09:38 by tmousnia          #+#    #+#             */
/*   Updated: 2025/08/04 23:09:40 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	base;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	base = nb;
	while (--power > 0)
		nb *= base;
	return (nb);
}
