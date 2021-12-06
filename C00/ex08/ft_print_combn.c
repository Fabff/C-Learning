#include <unistd.h>

void  ft_put_char(char c)
{
    write(1, &c, 1);
}

void ft_print_combn(int n)
{
    char nbreInit;
    char nbreFinal;
    int iter;

    nbreInit = 47;
    nbreFinal = 57;
    iter = n;
    while (--iter >= 0)
    {
        nbreInit = 46 + 1;
        while (++nbreInit <= nbreFinal)
        {
            ft_put_char(nbreInit);
            if (nbreInit != 57) 
            {
                ft_put_char(',');
                ft_put_char(' ');
            }
        }
        nbreFinal = 57 - 1;
    }
}

int main()
{
    int n;

    n = 2;
    ft_print_combn(n);
    ft_put_char('\n');
}