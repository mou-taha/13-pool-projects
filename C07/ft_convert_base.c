#include<stdio.h>
#include<stdlib.h>

int	ft_is_char_twice(int length, char *base)
{
	int	i;
	int	j;

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

int	check_base(char *base)
{
	int	base_length;

	base_length = 0;
	while (base[base_length])
	{
		if (base[base_length] == '+'
			|| base[base_length] == '-'
			|| base[base_length] == ' ' 
			|| (base[base_length] >= 9 && base[base_length] <= 13))
			return (0);
		base_length++;
	}
	if (ft_is_char_twice(base_length, base) == 1)
		return (0);
	return (base_length);
}
// Corrected get_index function
int get_index(char *src, char to_find)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == to_find)
			return (i);
		i++;
	}
	return (-1); // Return -1 for not found
}

// Corrected get_nbr function
char *get_nbr(char *nbr, char *base_from)
{
	int i = 0;
	int nb_start;
	char *res;

	// Skip leading whitespace and signs
	while (nbr[i] == ' '
		|| (nbr[i] >= 9 && nbr[i] <= 13)
		|| nbr[i] == '+'
		|| nbr[i] == '-')
	{
		i++;
	}
	nb_start = i;

	// Calculate the length of the number part correctly
	int num_len = 0;
	while (get_index(base_from, nbr[nb_start + num_len]) != -1)
	{
		num_len++;
	}

	// Allocate memory
	res = (char *)malloc(sizeof(char) * (num_len + 1));
	if (res == NULL)
		return NULL;

	// Copy the number part from 'nbr' (the input string)
	i = 0;
	while (i < num_len)
	{
		res[i] = nbr[nb_start + i];
		i++;
	}

	// Null-terminate the string
	res[i] = '\0';
	return res;
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int start_base;
    int dest_base;
    char *nb;
    
    start_base = check_base(base_from);
    dest_base = check_base(base_to);
    if (start_base < 2 || dest_base < 2)
        return (NULL);
    return get_nbr(nbr, base_from);
}

int main()
{
    printf("%s", ft_convert_base("01","01","0123456789"));
}















