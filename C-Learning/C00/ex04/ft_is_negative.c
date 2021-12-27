#include <unistd.h>

void ft_put_char(char c)
{
    write(1, &c, 1);
}

void ft_is_negative(int n)
{
    if (n < 0) 
        ft_put_char('N');
    else 
        ft_put_char('P');
}

int main()
{
    int n;

    n = 6;
    ft_is_negative(n);
    ft_put_char('\n');
    return 0;
}