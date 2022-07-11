#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char alpha = 122;
    while (alpha >= 97)
    {
        write(1, &alpha, 1);
        alpha -= 1;
    }
}

int main()
{
    ft_print_reverse_alphabet();
    write(1, "\n", 1);
    return 0;
}