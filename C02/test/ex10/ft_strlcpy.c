#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	src_len;

	src_len = 0;
	counter = 0;
	while (src[src_len])
		src_len++;
	if (size > 0)
	{
		while (counter < size - 1 && src[counter] != '\0')
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	return (src_len);
}

int main(void)
{
	char s1[15]="";
	char s2[]="";
	char *ptr_s1=s1;
	char *ptr_s2=s2;

	printf("res : %d, s1 : %s\n",ft_strlcpy(ptr_s1, ptr_s2, 15), s1);
	return 0;
}