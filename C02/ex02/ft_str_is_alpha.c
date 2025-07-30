/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:57:28 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/21 22:58:06 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] == '\0')
	{
		return (1);
	}
	while (str[counter])
	{
		if (!((str[counter] >= 'A' && str[counter] <= 'Z')
				|| (str[counter] >= 'a' && str[counter] <= 'z')))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
