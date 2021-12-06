#include <unistd.h>

void ft_put_char(int a, int b, int c)
{
    a = a + '0';
    b = b + '0';
    c = c + '0';
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    if (a != '7' || b != '8' || c != '9')
        write(1, ", ", 2);
}

void ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = -1;
    while(++a <= 7)
    {
        b = a;
        while(++b <= 8)
        {
            c = b;
            while(++c <= 9)
                ft_put_char(a, b, c);
        }
    }
}

int main()
{
    ft_print_comb();
    write(1, "\n", 1);
    return 0;
}