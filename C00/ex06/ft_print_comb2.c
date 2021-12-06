#include <unistd.h>


void ft_put_char(int a, int b)
{
    char c;
    char d;
   
    c = a / 10 + '0';
    write(1, &c, 1);
    c = a % 10  + '0';
    write(1, &c, 1);
    write(1, " ", 1);

    d = b / 10 + '0';
    write(1, &d, 1);
    d = b % 10 + '0';
    write(1, &d, 1);

    if (a%10 != 8 || b%10 != 9)
        write(1, ",", 1);
}

void ft_print_comb2(void)
{
    int a;
    int b;

    a = -01;
    while (++a <= 98)
    {
        b = a;
        while (++b <= 99)
        {
            ft_put_char(a, b);
            if (a%10 != 8 || b%10 != 9)
                write(1, " ", 1);
        }
        
    }
    write(1, "\n", 1);
}

int main()
{
    ft_print_comb2();
    return 0;
}