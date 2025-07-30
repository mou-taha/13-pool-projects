/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:16:42 by tmousnia          #+#    #+#             */
/*   Updated: 2025/07/21 23:16:45 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if ((str[counter] >= 'A' && str[counter] <= 'Z')
			|| (str[counter] >= 'a' && str[counter] <= 'z'))
		{
			if (counter == 0 || !((str[counter - 1] >= 'A'
						&& str[counter - 1] <= 'Z')
					|| (str[counter - 1] >= 'a' && str[counter - 1] <= 'z')
					|| (str[counter - 1] >= '0' && str[counter - 1] <= '9')))
			{
				if (str[counter] >= 'a' && str[counter] <= 'z')
					str[counter] = str[counter] - ('a' - 'A');
			}
			else
			{
				if (str[counter] >= 'A' && str[counter] <= 'Z')
					str[counter] = str[counter] + ('a' - 'A');
			}
		}
		counter++;
	}
	return (str);
}
