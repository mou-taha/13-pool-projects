#include <stdlib.h>

int ft_is_char_twice(int length, char *base)
{
	int i;
	int j;

	i = 0;
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int check_base(char *base)
{
	int base_length;

	base_length = 0;
	while (base[base_length])
	{
		if (base[base_length] == '+' || base[base_length] == '-' || base[base_length] == ' ' || (base[base_length] >= 9 && base[base_length] <= 13))
			return (0);
		base_length++;
	}
	if (ft_is_char_twice(base_length, base) == 1)
		return (0);
	return (base_length);
}

int get_index(char *src, char to_find)
{
	int i;

	i = 0;
	while (src[i])
	{
		if (src[i] == to_find)
			return (i);
		i++;
	}
	return (-1);
}

void	skip(char *nbr, int *i, int *sign)
{
	while (nbr[*i] == ' ' || (nbr[*i] >= 9 && nbr[*i] <= 13) || nbr[*i] == '+' || nbr[*i] == '-')
	{
		if (nbr[*i] == '-')
			*sign *= -1;
		*i++;
	}
}

char *get_nbr(char *nbr, char *base_from, int *sign)
{
	int i = 0;
	int nb_start;
	char *res;
	int num_len;

	skip(nbr, &i, &sign);
	nb_start = i;
	num_len = 0;
	while (get_index(base_from, nbr[nb_start + num_len]) != -1)
	{
		num_len++;
	}
	res = (char *)malloc(sizeof(char) * (num_len + 1));
	if (res == NULL)
		return NULL;
	i = 0;
	while (i < num_len)
	{
		res[i] = nbr[nb_start + i++];
	}
	res[i] = '\0';
	return res;
}

int convert_to_dec(char *nb, int base, char *base_from)
{
	int res;
	int i;

	i = 0;
	res = 0;
	while (nb[i])
	{
		res = res * base + get_index(base_from, nb[i]);
		i++;
	}
	return res;
}

char *convert_to_base(int dec, int base, char *base_to, int sign)
{
	char res[34];
	char *res2;
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 34)
	{
		res[i] = 0;
		i++;
	}
	i = 0;
	while (dec > 0)
	{
		res[i++] = base_to[dec % base];
		dec = dec / base;
	}
	res2 = malloc(i + 1 + sign);
	while (i >= 0)
	{
		if (sign)
		{
			res2[j++] = '-';
			sign = 0;
		}
		res2[j++] = res[--i];
	}
	res2[j] = '\0';
	return res2;
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int start_base;
	int dest_base;
	char *nb;
	int dec;
	int sign;

	sign = 1;
	start_base = check_base(base_from);
	dest_base = check_base(base_to);
	if (start_base < 2 || dest_base < 2)
		return (NULL);
	nb = get_nbr(nbr, base_from, &sign);
	dec = convert_to_dec(nb, start_base, base_from);
	if (sign == 1)
		sign = 0;
	else
		sign = 1;
	return convert_to_base(dec, dest_base, base_to, sign);
}
