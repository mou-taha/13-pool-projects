/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:28:54 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/19 19:05:35 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		if(*str == 'z')
			write(1, str, 1);
		str++;
	}
}
//TODO: remove test code
int main(int argc, char *argv[]){
    char c = argc + '0';
    write(1,&c,1);
    write(1,"\n",1);
    ft_putstr(argv[1]);
    return 1;
}
