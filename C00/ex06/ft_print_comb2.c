#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_display(int a, int b)
{
    ft_putchar(a/10+'0');
    ft_putchar(a%10+'0');
    ft_putchar(' ');

    ft_putchar(b/10+'0');
    ft_putchar(b%10+'0');

    if (a < 98 && b <= 99)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }

}

void ft_print_comb2(void)
{
    int a = -1;
    int b = 0;

    while (a < 98)
    {
        a++;
        b = a;
        while (b < 99)
        {
            b++;
            ft_display(a, b);
        }
    }
}

int main()
{
    ft_print_comb2();
    write(1, "\n", 1);
    return 0;
}