#include <stdio.h>
int ft_atoi(char *str)
{
	int symbol = 1;
	int i;
	int res;

	i = 0;
	res = 0;
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
