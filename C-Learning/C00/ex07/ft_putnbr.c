#include <unistd.h>
#include <stdio.h>

void put_char(int c)
{
    char h;

    h = c + '0';
    write(1, &h, 1);
}

void ft_putnbr(int nb)
{
    int n;

    if (nb < 0)
    {
        write(1, "-", 1);
        n = -nb;
    }
    else
        n = nb;

    if (n > 9)
    {
        ft_putnbr(n/10);
        n = n%10;
    }
    put_char(n);
}

int main()
{
    int n;

    n = -422;
    ft_putnbr(n);
     write(1, "\n", 1);

    return 0;
}