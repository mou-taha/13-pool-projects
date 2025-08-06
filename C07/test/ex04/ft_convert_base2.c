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