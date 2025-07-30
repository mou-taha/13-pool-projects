long	calc_result(char *str, char *base, int base_length, int start)
{
	long	res;
	int		index;

	res = 0;
	while (str[start])
	{
		index = get_index(base, str[start]);
		if (index < 0)
			break ;
		res = res * base_length + index;
		start++;
	}
	return (res);
}