/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:52:20 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/19 18:54:26 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	*c;

	c = a;
	a = b;
	b = c;
}
// TODO: delete test code
// char p= (*a%10) + '0';
// write(1,&p, 1);
// p= (*b%10)+'0';
// write(1,&p ,1);
// TODO: delete test code
// int 	main(void)
// {
// 	int nb1=5,nb2=6;
// 	int *a=&nb1;
// 	int *b=&nb2;
// 	ft_swap(a,b);
// 	return (0);
// }