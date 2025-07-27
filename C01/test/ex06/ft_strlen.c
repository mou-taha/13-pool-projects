/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:48:00 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/19 23:22:00 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
// //TODO; remove test code
// int main(void){
//     int c=ft_strlen("hello world, my name is youssef1s1111");
//     char cc= (c/10)+ '0';
//     write(1,&cc,1);
//     char vv= (c%10)+ '0';
//     write(1,&vv,1);
// }
