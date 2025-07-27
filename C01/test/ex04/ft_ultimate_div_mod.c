/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:58:23 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/19 19:02:53 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_val;

	a_val = *a;
	*a = a_val / *b;
	*b = a_val % *b;
}
// //TODO: remove test code
int     main(void)
{
    int nb1=101,nb2=0;
    char div[10];
    int counter=0;
    int *ptr_a = &nb1;
    int *ptr_b = &nb2;
    ft_ultimate_div_mod(ptr_a,ptr_b);
    while (nb1>0)
    {
        div[counter]=nb1%10+'0';
        nb1 = nb1/10;
        counter++;
    }
    write(1,"division on a: ",15);
    while (counter--)
    {
        write(1, &div[counter],1);
    }
    write(1,"\n",1);
    write(1,"remainder on b: ",16);
    char remainder =(nb2%10) +'0';
    write(1,  &remainder,1);
    return 0;
}
