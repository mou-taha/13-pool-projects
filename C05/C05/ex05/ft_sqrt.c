/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 23:10:22 by tmousnia          #+#    #+#             */
/*   Updated: 2025/08/04 23:10:23 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	while (--power > 0)
		nb *= base;
	return (nb);
}

int	ft_sqrt(int nb)
{
	int	power;
	int	root;

	power = 1;
	root = 1;
	while (power <= nb)
	{
		power = ft_iterative_power(root, 2);
		if (power == nb)
			return (root);
		root++;
	}
	return (0);
}
