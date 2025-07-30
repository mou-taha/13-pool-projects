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
#include <stdio.h>
//TODO:with array
void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	end;
	int	temp;

	counter = 0;
	end = size - 1;
	while (counter<end)
	{
		temp = tab[counter];
		tab[counter] = tab[end];
		tab[end] = temp;
		counter++;
		end--;
	}
}


int main (void)
{
	int nb[]={1,2,3,4,5,6,7,8,9};
	ft_rev_int_tab(nb,9);
	printf("Reversed array: ");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", nb[i]);
	}
	printf("\n");

}