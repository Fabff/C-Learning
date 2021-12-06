#include <unistd.h>

void ft_print_numbers(void)
{
    unsigned char c;
    c = 0 + '0';

    while (c <= '9')
    {
        write(1, &c, 1);
        c = c + 1;
    }
    write(1, "\n", 1);
}

int main()
{
    ft_print_numbers();
    return 0;
}