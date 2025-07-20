/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:10:31 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/19 19:01:23 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//TODO: remove test
// int	main(void)
// {
// 	int nb1,nb2;
// 	int *ptnb1=&nb1;
// 	int *ptnb2=&nb2;
// 	ft_div_mod(1005,10,ptnb1,ptnb2);
//     char pp[10];
//     char p;
//     int count=0;
//     while (nb1>0)
//     {
//         pp[count]=nb1%10+'0';
//         nb1=nb1/10;
//         count++;
//     }
//     write(1, "division: ", 10);
//     while (count--){
//         write(1, &pp[count], 1);
//     }
//     write(1, "\n", 1);
//     write(1, "remainder: ", 11);
// 	p= (nb2%10)+'0';
// 	write(1,&p ,1);
// }
