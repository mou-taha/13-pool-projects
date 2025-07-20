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
#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	*start;
	int	*end;
	int	temp;

	start = tab;
	end = tab + size - 1;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}




int main() {
    int arr[] = {1, 2, 3, 4, 5,6,7,8};
    int size = 8;
	int *ptr=arr;
	
    ft_rev_int_tab(arr, size);

    // Print reversed array
    for (int i = 0; i < size; i++) {
        char c=arr[i]+'0';
        write(1, &c,1);
    }
    return 0;
}
