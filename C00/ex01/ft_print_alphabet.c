#include <unistd.h>

void ft_print_alphabet(void)
{
    int alpha = 97;
    while (alpha <= 122)
    {
        write(1, &alpha, 1);
        alpha += 1;
    }
}

int main()
{
    ft_print_alphabet();
    write(1, "\n", 1);
    return 0;
}