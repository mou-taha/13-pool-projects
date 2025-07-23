int ft_atoi(char *str)
{
	int symbol = 1;
	int i;
	int res;

	i = 0;
	res = 0;
	while ((str[i] >= 48 && str[i] <= 57) || str[i] == '-' || str[i] == '+' || str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		if (str[i] == '-')
		{
			symbol *= -1;
		}
		if ((str[i] >= 48 && str[i] <= 57))
		{
			// *(ptr++)=str[i];
			// len_nb++;
			res = res * 10 + (str[i] - '0');
		}
		i++;
	}
	// while (len_nb--)
	// {
	// 	res += (char_res[len_nb] - '0') * mult;
	// 	mult *= 10;
	// }
	return (res * symbol);
}

int main(int count, char **arg)
{
	printf("res: %d", ft_atoi(arg[1]));
}