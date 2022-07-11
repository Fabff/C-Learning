#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    unsigned int n = 0;

    if (nb < 0)
    {
        ft_putchar('-');
        n = 0-nb;
    }
    else
        n = nb;
    if (n > 9)
        ft_putnbr(n/10);
    ft_putchar(n%10+'0');
}

int main()
{
    ft_putnbr(-423434);
    ft_putchar('\n');
    return 0;
}