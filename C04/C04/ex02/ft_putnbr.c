#include <unistd.h>

void ft_putnbr(int nb)
{
    char buffer[11];
    int i;
    long n = nb;

    i = 0;
    if (nb == 0)
        write(1, "0", 1);
    while (i < 11)
    {
        buffer[i] = 0;
        i++;
    }
    i = 0;
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    while (n > 0)
    {
        buffer[i] = '0' + (n % 10);
        n = n / 10;
        i++;
    }
    while (buffer[--i])
        write(1, &buffer[i], 1);
}
