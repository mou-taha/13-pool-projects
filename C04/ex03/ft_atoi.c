/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:27:30 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/30 20:27:33 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	symbol;
	int	i;
	int	res;

	i = 0;
	res = 0;
	symbol = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			symbol *= -1;
		i++;
	}
	while ((str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * symbol);
}
