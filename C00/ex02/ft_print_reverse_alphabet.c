#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    unsigned char    c;

    c = 'z';
    while (c >= 'a')
    {
        write(1, &c, 1);
        c = c - 1;
    }
     write(1, "\n", 1);
}

int main()
{
    ft_print_reverse_alphabet();
    return 0;
}