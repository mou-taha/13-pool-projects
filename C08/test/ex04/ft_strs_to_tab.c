#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*ptr;

	size = 0;
	while (src[size])
		size++;
	ptr = malloc((size * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	size = 0;
	while (src[size])
	{
		ptr[size] = src[size];
		size++;
	}
	ptr[size] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_stock_str	*res;

	res = malloc((ac + 1) * sizeof(t_stock_str));
	if (!res)	
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_str_length(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		i++;
	}
	res[i].str = 0;
	res[i].copy = 0;
	return (res);
}

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"


int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}