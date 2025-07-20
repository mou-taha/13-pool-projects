/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dt_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:49:19 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/20 11:30:15 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				temp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = temp;
			}
			j++;
		}
		i++;
	}
}
void print_array(int *tab, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    // Edge Case 1: Empty array
    int tab1[] = {};
    printf("Test 1 (Empty array): ");
    ft_sort_int_tab(tab1, 0);
    print_array(tab1, 0);

    // Edge Case 2: Array with one element
    int tab2[] = {5};
    printf("Test 2 (Single element): ");
    ft_sort_int_tab(tab2, 1);
    print_array(tab2, 1);

    // Edge Case 3: Array with identical elements
    int tab3[] = {5, 5, 5, 5};
    printf("Test 3 (Identical elements): ");
    ft_sort_int_tab(tab3, 4);
    print_array(tab3, 4);

    // Edge Case 4: Already sorted in ascending order
    int tab4[] = {1, 2, 3, 4, 5};
    printf("Test 4 (Already sorted): ");
    ft_sort_int_tab(tab4, 5);
    print_array(tab4, 5);

    // Edge Case 5: Sorted in descending order
    int tab5[] = {5, 4, 3, 2, 1};
    printf("Test 5 (Descending order): ");
    ft_sort_int_tab(tab5, 5);
    print_array(tab5, 5);

    // Edge Case 6: Array with negative numbers
    int tab6[] = {-1, -3, -2, 0, 1};
    printf("Test 6 (Array with negative numbers): ");
    ft_sort_int_tab(tab6, 5);
    print_array(tab6, 5);

    // Edge Case 7: Large and small numbers mixed
    int tab7[] = {1000, -5000, 3, 42, -100};
    printf("Test 7 (Mixed large and small numbers): ");
    ft_sort_int_tab(tab7, 5);
    print_array(tab7, 5);

    return 0;
}