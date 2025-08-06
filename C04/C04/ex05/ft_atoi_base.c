/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmousnia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:41:41 by tmousnia          #+#    #+#             */
/*   Updated: 2025/08/02 10:41:43 by tmousnia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_char_twice(int len, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	len;

	len = 0;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-' || base[len] == ' '
			|| (base[len] >= 9 && base[len] <= 13))
			return (0);
		len++;
	}
	if (len < 2)
		return (0);
	if (ft_is_char_twice(len, base) == 1)
		return (0);
	return (len);
}

int	get_index(char c, char *base, int base_len)
{
	int	i;

	i = 0;
	while (i < base_len)
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		base_len;
	long	result;

	base_len = check_base(base);
	if (base_len == 0)
		return (0);
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (get_index(str[i], base, base_len) != -1)
	{
		result = result * base_len + get_index(str[i], base, base_len);
		i++;
	}
	return (result * sign);
}
