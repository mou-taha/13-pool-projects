/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:48:00 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/19 23:16:18 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	end;
	int	temp;

	counter = 0;
	end = size - 1;
	while (counter < end)
	{
		temp = tab[counter];
		tab[counter] = tab[end];
		tab[end] = temp;
		counter++;
		end--;
	}
}
